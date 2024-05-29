class Solution {
public:
    
    //memo dp[n+1][amt+1]
    int dp[12+1][10000+1];
    
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
        int ans = recur(coins, 0, amount);
        if(ans == INT_MAX -1) return -1;
        return ans;
        
    }
};