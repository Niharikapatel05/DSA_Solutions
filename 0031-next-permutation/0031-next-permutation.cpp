class Solution {
private:
    void swap(vector<int>& nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums, start, end);
            start++;
            end--;
        }
    }

public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        //step1: find first decrasing element from the right
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        //step2: find the next greater element to swap with nums[index];
        if(index != -1){
            for(int i=n-1; i>index; i--){
                if(nums[i] > nums[index]){
                    swap(nums, i, index);
                    break;
                }
            }
        }
        reverse(nums, index+1, n-1);
    }
};