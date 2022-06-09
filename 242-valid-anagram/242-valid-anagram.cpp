class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ss(26), tt(26);
        for (int i = 0; i < s.size(); i++)
            ss[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++)
            tt[t[i] - 'a']++;
        for (int i = 0; i < 26; i++){
            if(ss[i]!=tt[i])
                return false;
            else continue;
        }return true;
        
    }
};
