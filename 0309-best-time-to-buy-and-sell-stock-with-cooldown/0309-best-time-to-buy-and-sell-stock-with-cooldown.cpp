class Solution {
public:
    int dfs(int i , int turn , vector<int>& prices , vector<vector<int>>& dp){
        if(i >= prices.size()) return 0;
        // 0 for buy
        // 1 for sell 
        // 2 for last day sold
        
        //memoization
        if(dp[i][turn] != -1){
            return dp[i][turn];
        }
        //buy
        if(turn == 0){
            return dp[i][turn] = max(-prices[i] + dfs(i + 1 , 1 , prices , dp) , dfs(i + 1 , 0 , prices , dp));
        }
        //selling
        else if(turn == 1){
            return dp[i][turn] = max(prices[i] + dfs(i + 1 , 2 , prices , dp) , dfs(i + 1 , 1 , prices , dp));
        }
        
        //sold yesterday
        else{
            return dp[i][turn] = dfs(i + 1 , 0 , prices , dp);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        //dp with recursion and memoization
        vector<vector<int>> dp(n + 1 , vector<int>(3 , -1));
        return dfs(0 , 0 , prices , dp);
    }
};