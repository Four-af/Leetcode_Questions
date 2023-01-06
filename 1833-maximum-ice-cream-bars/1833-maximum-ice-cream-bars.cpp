class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int res(0), sum(0), curSum(0);
        for(int i=0; i<costs.size(); i++){
            if(costs[i] <= coins){
               coins-=costs[i];
               res++; 
            }
            else break;
        }
        return res;
    }
};