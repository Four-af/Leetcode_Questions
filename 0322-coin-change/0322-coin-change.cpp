class Solution {
public:
    
    //memo dp[n+1][amt+1]
    int dp[12+1][10000+1];
    
    int tabula(vector<int>&coins,int n, int amt){
        for (int i = 0; i <= n; i++){
            for (int j = 0; j < amt + 1; j++){
                if(i==0 || j==0){
                    if(j == 0)
                        dp[i][j] = 0;
                    else dp[i][j] = INT_MAX-1;
                }
            }
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j < amt + 1; j++){
                if(coins[i-1]>j) dp[i][j] = 0 + dp[i-1][j];
                else
                    dp[i][j] = min(0 + dp[i-1][j], 1+dp[i][j-coins[i-1]]);
            }
        }
        return dp[n][amt];
    }
    
    int recur(vector<int>&coins, int idx, int amt){
        if(idx>=coins.size() || amt<=0){
            if(amt == 0){
                return 0;
            }
            else return INT_MAX-1;
        }
        
        if(dp[idx][amt]!=-1){
            return dp[idx][amt];
        }
        
        int res = -1;
        if(coins[idx]>amt){
            int notTake = 0 + recur(coins, idx+1, amt - 0);
            res = notTake;
            dp[idx][amt] = res;
        }
        else{
            //take coin...
            int take = 1 + recur(coins, idx, amt - coins[idx]);
            //not take coin
            int nTake = 0 + recur(coins, idx+1, amt - 0);
            res= min(take, nTake);
            dp[idx][amt] = res;
        }
        
        return dp[idx][amt];
    }
    int coinChange(vector<int>& coins, int amount) {  
       //recursion
        // memoization
        //tabulation
        //space reduction
    //     1 2 3
    //take not take
         memset(dp, -1, sizeof(dp));
        // int ans = recur(coins, 0, amount);
        int n=coins.size();
         int ans = tabula(coins, n, amount);
        if(ans == INT_MAX -1) return -1;
        return ans;
        
    }
};