//https://leetcode.com/problems/minimum-fuel-cost-to-report-to-the-capital/discuss/3176882/C%2B%2BorDFS-orO(n)-or-Easy

class Solution {
public:
long long int fuel=0;
    int dfs(int par,int i,vector<vector<int>>&adj,int s){
        int r=1;
        for(auto x:adj[i]){
            if(par!=x)r+=dfs(i,x,adj,s);
        }
        if(i)
        fuel+=(r-1)/s+1;
        return r;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long ans=0;
        int n=roads.size();
        vector<vector<int>>adj(n+1);
        for(auto r:roads){
            adj[r[0]].push_back(r[1]);
            adj[r[1]].push_back(r[0]);
        }
        dfs(-1,0,adj,seats);
        return fuel;
        
    }
};