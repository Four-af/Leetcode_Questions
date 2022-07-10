class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int mn=INT_MAX;
        int some=0;
        int first=cost[0];
        int second=cost[1];
        
        for(int i=2;i<cost.size();i++){
            int k =cost[i] + min(first,second);
            first=second;
            second=k;
        }
        
        return min(first,second);
    }
};