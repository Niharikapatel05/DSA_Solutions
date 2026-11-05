class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool firstRow = false;
        bool firstCol = false;

        //step1:check first row
        for(int j=0; j<m; j++){
            if(matrix[0][j] == 0)
               firstRow = true;
        }

        //step2:check first col
        for(int i=0; i<n; i++){
            if(matrix[i][0] == 0)
               firstCol = true;
        }

        //step3:mark row and col
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        //step4:set zeros using markers
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        //step5:handle first row
        if(firstRow){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }

        //step6:handle first col
        if(firstCol){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};