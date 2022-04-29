class Solution {
public:
    
    vector<int> vis, col;
    bool dfs(int v,int c,vector<vector<int>>& graph){
        vis[v]=1;
        col[v]=c;
         for(int child:graph[v]){
            if(vis[child]==0){
                //OR to change color
                //c^1 is for flipping 1 by 0 or 0 by 1
                if(dfs(child,c^1,graph)==false) 
                    return false;
            }
            else{
                if(col[v]==col[child])
                    return false;
            }
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        vis.resize(graph.size());
        col.resize(graph.size());
        
        for(int i=0;i<graph.size();i++){
            //visited and colored
            if(vis[i]==0 && dfs(i,0,graph)==false) return false;
        }
        return true;
    }
};