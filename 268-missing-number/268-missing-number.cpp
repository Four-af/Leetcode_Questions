class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                idx=i;
                break;
            }
            
        }
        return idx;
    }
};