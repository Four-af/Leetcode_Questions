class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        vector<int> res;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(auto it : m){
            res.push_back(it.second);
        }
        sort(res.begin(), res.end());
        for(int i=0; i<res.size()-1; i++){
            // cout<<res[i]<<" || ";
            if(res[i]==res[i+1]) return false;
        }
        return true;
    }
};