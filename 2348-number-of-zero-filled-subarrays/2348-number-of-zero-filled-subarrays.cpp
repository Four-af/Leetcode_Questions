#define ll long long

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll res  = 0;
        ll count = 0;
        for(ll i=0; i<nums.size(); i++){
            if(nums[i]==0) count++;
            else{
              res+=(count*(count+1))/2;
              count=0;  
            } 
        }
        if(count){
            res+=(count*(count+1))/2;
            count=0;
        }
        return res;
    }
};