class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int l=0, r=nums.size()-1, m;
        while(l<r){
            m = (l+r)/2;
            if(m&1) m--;
            if(nums[m]!=nums[m+1]) r = m;
            else l = m+2;
        }
        return nums[l];
    }
};