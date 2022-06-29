class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vvv;
        vector<int> temp;
        subsets(nums, 0, temp, vvv);
        return vvv;
    }
    void subsets(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& vvv) {
        vvv.push_back(temp);
        for (int j = i; j < nums.size(); j++) {
            temp.push_back(nums[j]);
            subsets(nums, j + 1, temp, vvv);
            temp.pop_back();
        }
    }
};