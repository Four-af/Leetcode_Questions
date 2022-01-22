class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(), k=0;
        for(int i=0; i<n; i++){
            if(k<i)
                return false;
            k= max(k, i+nums[i]);
        }return true;
    }
};