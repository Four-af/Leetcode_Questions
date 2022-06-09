class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int temp=1,n=nums.size();
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) temp++;
            else{
                if(n/3<temp){
                    res.push_back(nums[i]);
                }
                temp=1;
            }
        }
        if(n/3<temp){
            res.push_back(nums[n-1]);
        }
        return res;
    }
};