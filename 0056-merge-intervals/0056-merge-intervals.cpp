class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        
        for(int i=0; i<n; i++){
            int currStart = intervals[i][0];
            int currEnd = intervals[i][1];

            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                int prevEnd = ans.back()[1];

                if(currStart <= prevEnd){
                    ans.back()[1] = max(prevEnd, currEnd);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};