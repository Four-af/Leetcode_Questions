class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //lowerrr bound gives itrtor
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};