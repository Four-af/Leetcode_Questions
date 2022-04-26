class Solution {
public:
    
    int par[1001];
    
    int find_parent(int x){
        if(par[x]<0) return x;
        return par[x]=find_parent(par[x]);
    }
    
    void union_par(int a, int b)
    {
        par[a] = b;
    }
    
    
    int minCostConnectPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++) par[i] = -1;
        vector<pair<int,pair<int,int>>> adjc;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int weight = abs(arr[i][0] - arr[j][0]) + abs(arr[i][1] - arr[j][1]);//manhattan distance
                
                adjc.push_back({weight, {i, j}});
                
            }
        }
        sort(adjc.begin(), adjc.end()); //weight sort--manhattan smollest
        int sum=0;
        //now traverseee lessgo
        for(int i = 0; i < adjc.size(); i++)
        {
            int a = find_parent(adjc[i].second.first); // first node
            int b = find_parent(adjc[i].second.second); // second node
            
            if(a != b) // not same parent---add
            {
                sum += adjc[i].first;
                union_par(a, b); // merge
            }
        }
        return sum;
        
        
    }
};