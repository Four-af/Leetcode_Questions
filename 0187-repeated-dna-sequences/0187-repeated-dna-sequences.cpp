class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> m;
        for(int i=0; i<s.size(); i++) m[s.substr(i, 10)]++;
        vector<string> res;
        for(auto i : m) {
            if(i.second > 1) res.push_back(i.first);
        }
        return res;
    }
};