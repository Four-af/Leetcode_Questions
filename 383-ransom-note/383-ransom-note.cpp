class Solution {
public:
    bool canConstruct(string rN, string m) {
        vector<int> rf(26,0);
        vector<int> mf(26,0);
        for(int i = 0; i< rN.size(); i++){
            rf[rN[i]-'a']++;
        }
        for(int i = 0; i< m.size(); i++){
            mf[m[i]-'a']++;
        }
        for(int i = 0; i<26; i++){
            if(rf[i]==0) continue;
            if(rf[i] > mf[i])
                return false;
        }
        return true;
    }
};