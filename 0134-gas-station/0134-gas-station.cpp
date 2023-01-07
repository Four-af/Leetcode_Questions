#define ll long long
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        ll sum(0), c(0);
        for(int i=0;i<gas.size();i++){
            sum += gas[i];
            c += cost[i];
        }
        if(sum<c) return -1;
        sum=0, c=0;
        for(ll i=0; i<gas.size();i++){
            if(c<0){
                c=0;
                sum=i;
            }
            c+= (gas[i]-cost[i]);
        }
        return sum;
    }
};
