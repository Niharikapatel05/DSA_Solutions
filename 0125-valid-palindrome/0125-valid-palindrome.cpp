class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";

        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }

        string reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());

        if(str == reverseStr){
            return true;
        }

        else{
            return false;
        }
        
    }
};