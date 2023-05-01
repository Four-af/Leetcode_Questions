class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        //*First Part Topological sort*
        int n = colors.size();
        vector<int> Adj[n];
        vector<int> Indegree(n);//The number of Incoming Branches in the node
        for(auto &x : edges)
        {
            Indegree[x[1]]++;
            Adj[x[0]].push_back(x[1]);
        }
        queue<int> q1;
        for(int i=0;i<n;i++)
        {
            if(!Indegree[i])q1.push(i);
        }
        vector<int> top_sort;
        while(!q1.empty())
        {
            int a = q1.front();
            top_sort.push_back(a);
            q1.pop();
            for(auto &x : Adj[a])
            {
                Indegree[x]--;
                if(!Indegree[x])q1.push(x);
            }
        }
        int ans = 0;
        if(top_sort.size() < n)return -1;//Here Exists a Cycle....
        vector<bool> IsVisited(n, false);
        vector<vector<int>> v2(n, vector<int>(26, 0));//Mapping the maximum number of occurence of char j, at node i --> v2[i][j] 
        reverse(top_sort.begin(), top_sort.end());//For Reverse Traversing from leaf to Root
        for(auto &x : top_sort)
        {
            for(auto &y : Adj[x])
            {
                for(int i=0;i<26;i++)
                {
                    v2[x][i] = max(v2[x][i], v2[y][i]);
                }
            }
            v2[x][colors[x]-'a']++;
            ans = max(ans , v2[x][colors[x]-'a']);
        }
        return ans;
    }
};