class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int idx = -1;
        if(nums.size()<3)   return false;
        int m = INT_MAX, n = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(m>=nums[i]){
                m = nums[i];
            }
            else if(n>=nums[i]){
                n = nums[i];
            }
            else    return true;
        }
        return false;     
    }  
};