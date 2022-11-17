class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(nums), s(nums);
        p[0] = nums[0];
        s[n-1] = nums[n-1];
        for (int i = 1; i < n-1; i++)
        {
            p[i] *= p[i-1];
            s[n-i-1] *= s[n-i];
        }
        nums[0] = s[1], nums[n-1] = p[n-2];
        for (int i = 1; i < n-1; i++)
            nums[i] = p[i-1]*s[i+1];
        return nums;
    }
};