class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n= nums.size();
       sort(nums.begin(), nums.end());
       set<vector<int>> triplets;
       vector<vector<int>> ans;

       for(int i=0; i<n-2; i++){
        int j = i+1;
        int k = n-1;

        while(j<k){
            long long sum = (long long ) nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }
            else if(sum == 0){
                triplets.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else{
                k--;
            }
        }

    }  
        ans.assign(triplets.begin(), triplets.end());
        return ans;
    }
};