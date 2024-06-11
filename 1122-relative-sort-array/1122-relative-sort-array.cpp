class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        vector<int> res;
        for(auto x: arr1){
            mp[x]++;
        }
        for(auto x:arr2){
            int count = mp[x];
            while(count--){
                res.push_back(x);
            }
            mp.erase(x);
        }
        for(auto x:mp){
            int count = x.second;
            while(count--){
                res.push_back(x.first);
            }
        }
        return res;
    }
};