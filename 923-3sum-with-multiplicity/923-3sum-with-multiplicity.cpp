class Solution {
public:
    int threeSumMulti(vector<int>& arr, int X) {
        long long mod = 1e9+7, ans = 0;
        unordered_map<int, int> mappu;
        
        for(int i=0; i< arr.size(); i++) {
            ans = (ans + mappu[X - arr[i]]) % mod;
            
            for(int j=0; j<i; j++) {
                mappu[arr[i] + arr[j]]++;
            }
        }
        return ans;
    }
};