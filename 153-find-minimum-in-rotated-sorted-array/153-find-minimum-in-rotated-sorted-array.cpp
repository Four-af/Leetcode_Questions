class Solution {
public:
    int findMin(vector<int>& nums) {
        // int prev=nums[0];
        int l=0, r=nums.size()-1;
        int k=0;
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]>nums[r])
                l=m+1,k=l;
            else r=m,k=r;
        }
        
        return nums[k];
    }
};
