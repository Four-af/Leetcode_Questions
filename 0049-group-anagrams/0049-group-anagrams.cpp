class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map <string,vector<int>> mp{};      
        
        for(int i=0; i<strs.size(); i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            mp[str].push_back(i);
        }
        vector<vector<string>> res{};
        for ( auto itr:mp){
            vector<string> t{};
            for(int i=0; i<itr.second.size(); i++){
                t.push_back(strs[itr.second[i]]);
            }res.push_back(t);
            
        }
        return res;
    }
};