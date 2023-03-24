class Solution {
public:
    
    int dfs(int node, int parent, vector<pair<int, int>> a[]){
        int count = 0;
        for(auto x : a[node]){
            if(x.first == parent) continue;
            count+= x.second + dfs(x.first, node, a);
        }
        return count;        
    }
    
    int minReorder(int n, vector<vector<int>>& c) {
        vector<pair<int, int>> a[n+1];
        for(auto x : c){
            a[x[0]].push_back({x[1],1});
            a[x[1]].push_back({x[0],0});
        }
            return dfs(0,-1,a);        
    }
};