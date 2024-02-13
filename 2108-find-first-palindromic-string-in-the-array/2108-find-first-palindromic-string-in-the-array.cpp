class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            string x  = words[i];
            string r = x;
            reverse(r.begin(), r.end());
            if(r==x) return r;
        }
        string s = "";
        return s;
    }
};