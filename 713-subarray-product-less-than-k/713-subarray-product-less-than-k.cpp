class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k == 0) return 0;
        int cnt = 0;
        int pro = 1;
        int j, i=0;
        for ( j = 0; j < nums.size(); j++) {
            pro *= nums[j];
            while (i <= j && pro >= k) {
                pro /= nums[i];
                i++;
            }
            cnt += j - i + 1;
        }
        return cnt;
    }
};