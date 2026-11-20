class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int n = chars.size();
        int i = 0;

        while(i<n){
            char character = chars[i];
            int count = 0;

            while(i<n && chars[i] == character){
                count++;
                i++;
            }
            ans.push_back(character);

            if(count > 1){
                string s = to_string(count);
                for(int j=0; j<s.length(); j++){
                    ans.push_back(s[j]);
                }
            }
        }
        for(int j=0; j<ans.length(); j++){
            chars[j] = ans[j];
        }
        return ans.length();
    }
};