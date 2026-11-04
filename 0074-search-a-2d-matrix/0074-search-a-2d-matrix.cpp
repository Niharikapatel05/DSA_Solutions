class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();//rows
        int n = matrix[0].size();//columns
        int low = 0;
        int high = m*n-1;

        while(low <= high){
            int mid = low + (high-low)/2;
            int row = mid/n;
            int col = mid%n;

            if(matrix[row][col] < target){
                low = mid + 1;
            }
            else if(matrix[row][col] > target){
                high = mid - 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};