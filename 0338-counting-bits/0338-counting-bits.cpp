class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> nits(n+1,0);
        nits[0] = 0;
        for(int i=1; i<=n; i++){
            nits[i] = nits[i/2] + i%2;
        }
        return nits;
    }
};