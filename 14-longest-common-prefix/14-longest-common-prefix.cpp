class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size() == 0) return "";
        
        int n = str.size();
        string ans  = "";
        sort(begin(str), end(str));
        string s1 = str[0];
        string s2 = str[n-1];
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == s2[i])
                ans+=s1[i];
            else break;
        }
        return ans;
    }
};