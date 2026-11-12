class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Cycle Detection Using Floyd’s Tortoise and Hare Algorithm :
        int n = nums.size();
        int slow = nums[0];
        int fast = nums[0];

        while(1){
            //while(1) means infinite loop because 1 represents true in C++.
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                break;
            }
        }

        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};