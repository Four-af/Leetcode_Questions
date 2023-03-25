#define ll long long
ll m = 1e18+7;
class Solution {
public:
    
    void dfs(int start, vector<ll> v[], vector<bool>& vis, ll& countNode){
         vis[start] = 1;
        countNode++;
        for(int i= 0; i<v[start].size(); ++i){        
            if(vis[v[start][i]] == 0)
            dfs(v[start][i], v, vis,countNode);        
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
       vector<ll> a[n];
        vector<bool> vis(n,false);
        for(auto x : edges){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }
        ll comp = 0;
        vector<ll> nodes;
        for(ll i=0; i<n; i++){
            if(vis[i]==0){
                ll countNode=0;
                 dfs(i,a,vis,countNode);
                 comp++;
                 nodes.push_back(countNode);
            }
        }
        ll array_sum = 0;
        for (ll i = 0; i < nodes.size(); i++)
        array_sum = array_sum + nodes[i];
        ll array_sum_square = array_sum * array_sum % m;
        ll individual_square_sum = 0;
        for (ll i = 0; i < nodes.size(); i++)
            individual_square_sum += nodes[i]*nodes[i] % m;
        return (array_sum_square - individual_square_sum)/2;
        
    }
};