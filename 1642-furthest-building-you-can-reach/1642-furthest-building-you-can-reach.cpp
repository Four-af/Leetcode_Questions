class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> max_bricks;
    
        int i=0, diff =0; // i is used for storing the position and diff for storing difference.
        for(i=0; i<heights.size()-1; i++){ 
            diff = heights[i+1]-heights[i];
            if(diff <= 0){
                continue;
            }
            bricks -= diff;
            max_bricks.push(diff); //adding the number of bricks used in priority queue.
            if(bricks < 0){
                bricks += max_bricks.top();
                max_bricks.pop(); 
                ladders--; 
            }
         if(ladders < 0) break;
        }
        return i;
    }
};