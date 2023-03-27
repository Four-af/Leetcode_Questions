class Solution {
public:
    
    int ans = 0;
    vector<vector<int>> dp;
    
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n)
    {
        if(i>m || j>n) return 999999;
        if(i==m and j==n) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int rmove=0;
        int dmove=0;
        if(i<=m) rmove=grid[i][j]+solve(grid,i+1,j,m,n);
        if(j<=n) dmove=grid[i][j]+solve(grid,i,j+1,m,n);
        
        return dp[i][j]=min(rmove,dmove);
    }
    // void dfs()
    int minPathSum(vector<vector<int>>& grid) {
        dp.resize(1001,vector<int>(1001,-1));
        int m = grid.size()-1;
        int n = grid[0].size()-1;
        return solve(grid,0,0,m,n);
    }
};