class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    //cells with any orange
    int ct = 0;
    //result
    int res = -1;
    //queue ...pairs of coord i and j
    queue<vector<int>> q;
    
    //ways to move//basixally coords
    vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[0].size(); j++) {
            //increasing number of valid cells
            if(grid[i][j] > 0) 
                ct++;
            //only rotten oranges must be on initial step of queue
            if(grid[i][j] == 2) 
                q.push({i, j});
        }
    }
    
    while(!q.empty()) {
        //we do one step from rotten
        res++;       
        int size = q.size();      
        //starting from all rotten nodes 
        for(int k = 0; k < size; k++) {
            vector<int> cur = q.front();
            q.pop();
            ct--;//decr valid cell            
            for(int i = 0; i < 4; i++) {//all four directions
                int x = cur[0] + dir[i][0];//coordss
                int y = cur[1] + dir[i][1];//cordinate             
                //if we go out of border or find non-fresh orange, we skip this iteration
                if(x >= grid.size() || x < 0 || y >= grid[0].size() || y < 0 || grid[x][y] != 1) 
                    continue;                
                //orange becomes rotten
                grid[x][y] = 2;                
                //this orange will make neighbor orange rotten
                q.push({x, y});
            }
        }
    }
    //if we looked through all oranges, return result, else -1
    return (ct == 0) ? max(0, res) : -1;
}
};