class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLength = 0;
        int right = 0, left = 0;
        unordered_set<char> charSet;

        while(right < n){
            if(charSet.find(s[right]) == charSet.end()){//unique character
                charSet.insert(s[right]);
                maxLength = max(maxLength, right-left+1);
                right++;//expand the window
            }
            else{
                charSet.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};