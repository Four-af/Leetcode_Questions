class Solution {
public:
    int findTheWinner(int n, int k) {
       int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k)%i;
        }
        return ans+1;
    }
};

// 1 2 3 4 5 6 7 8 9
// 1 2 3 5 6 7 9
// 1 2 5 6 7
// 1 2 5 7
// 1 2 7
// 2 7
// 2