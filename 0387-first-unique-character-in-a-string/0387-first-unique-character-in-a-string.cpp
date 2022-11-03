class Solution {
public:
    int firstUniqChar(string s) {
        // vector<pair<int,int>> f(s.size());
        vector<vector<int>> f(26,vector<int>(2,0));
        for(int i=0; i<s.size(); i++){
            f[s[i]-'a'][0]++;
            f[s[i]-'a'][1] = i;
        }
        vector<int> idx;
        for(int i=0; i<26; i++){
            if(f[i][0] == 1) idx.push_back(f[i][1]);
            else continue;
        }
        if(idx.size()==0) return -1;
        else{
            return *min_element(idx.begin(), idx.end());
        }
    }
};