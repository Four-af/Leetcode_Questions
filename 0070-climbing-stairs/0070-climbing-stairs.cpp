class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int step2 = 2, step1 = 1, res;
        for (int i = 3; i <= n; i++) {
            res = step2 + step1;
            step1 = step2;
            step2 = res;
        }
        return res;
    }
};