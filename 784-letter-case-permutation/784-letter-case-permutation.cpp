class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        letters(S, 0, ans);
        return ans;
    }
    
    void letters(string &s, int i, vector<string> &ans) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }
        char c = s[i];
        //lower/upper case
        s[i] = islower(c) ? toupper(c) : tolower(c);
        letters(s, i + 1, ans);
        if (isalpha(c)) {//digit path 
            s[i] = c;
            letters(s, i + 1, ans);
        }
    }
};