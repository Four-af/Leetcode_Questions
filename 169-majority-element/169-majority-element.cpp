class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int temp=1,res=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) temp++;
            else{
                if(ans<=temp){
                    res=nums[i];
                }
                ans=max(ans,temp);
                temp=1;
            }
        }
        if(ans<=temp){
            res=nums[nums.size()-1];
        }
        return res;
    }
};