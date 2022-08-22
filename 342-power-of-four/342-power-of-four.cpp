class Solution {
public:
    bool isPowerOfFour(int n) {
       if(__builtin_popcount(n)!=1) return false;
        if(ffs(n)&1) return true;
        return false;
        
    }
};