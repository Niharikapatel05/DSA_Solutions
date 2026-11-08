class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort (intervals.begin(), intervals.end());
        vector <vector<int>> ans;
        int n = intervals.size();

        for(int i=0; i<n; i++){
            //if ans empty
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                int currStart = intervals[i][0];
                int currEnd = intervals[i][1];

                int prevEnd = ans.back()[1];

                //check overlap
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