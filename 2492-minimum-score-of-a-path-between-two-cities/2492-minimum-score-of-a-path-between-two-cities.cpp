#define pb push_back
class Solution {
public:
    int minScore(int n, vector<vector<int>>& r){
        //making adj list
        vector<vector<int>> a[n+1];
        for(int i=0; i<r.size(); i++){
            a[r[i][0]].pb({r[i][1],r[i][2]});
            a[r[i][1]].pb({r[i][0],r[i][2]});
        }
        //making a visited vector
        vector<int> v(n+1,0);
        v[1] = 1;
        //traversing breadth first search... make queueueueueue
        queue<int> q;
        //bcz cities r frm 1 to n ... means root is always 1
        q.push(1);
        //traverseeee
        while(!q.empty()){
            //get current node
            int curr = q.front();
            
            //remove it from the queue and process it
            q.pop();
            for(auto &x : a[curr]){
                if(!v[x[0]]){
                    v[x[0]]=1;
                    q.push(x[0]);
                }
            }
        }
        
        //gettin min distanec
        int ans = INT_MAX;
         for(int i=0; i<r.size(); i++){
              // minimum possible score out of all available paths
          // if src and dest both are visited cities then try to make this our ans
            if(v[r[i][0]] && v[r[i][1]])
                ans = min(ans,r[i][2]);
         }
        return ans;
        
              
    }
        
};
