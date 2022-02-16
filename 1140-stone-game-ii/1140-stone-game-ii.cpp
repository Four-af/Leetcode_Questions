class Solution
{
public:
    int stoneGameII(vector<int>& piles)
    {
        int n = piles.size(), max_m = (n + 1) >> 1;
        vector<int> sum = { 0 };
        for (auto &x : piles){
            sum.push_back(sum.back() + x);
        }
        int f[101][101];
        for (int i = n - 1; i >= 0; i--){
            int rest = n - i, total = sum[n] - sum[i];
            for (int m = 1; m <= max_m; m++){
                if (rest <= 2 * m)
                    f[i][m] = total;
                else{
                    f[i][m] = 0;
                    for (int x = 1; x <= 2 * m; x++){
                        f[i][m] = max(f[i][m], total - f[i + x][min(max_m, max(x, m))]);
                    }
                }
            }    
        }
        return f[0][1];
    }
};