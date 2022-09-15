class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        sort(c.begin(),c.end());
        if(c.size()%2!=0) return {};
        map<int , int> m;
        vector<int> a;
        for(int i=0;i<c.size();i++) m[c[i]]++;
        for(int i=0;i<c.size();i++){
        if (m[c[i]] == 0) continue;
          if (m[c[i] * 2] == 0) return {};
          a.push_back(c[i]);
          m[c[i]]--;
          m[c[i] * 2]--;
        }
        return a;
    }
};