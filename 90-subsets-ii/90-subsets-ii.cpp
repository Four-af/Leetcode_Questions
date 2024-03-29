class Solution {
public:
    vector<std::vector<int> > subsetsWithDup(vector<int> &nums) {
		sort(nums.begin(), nums.end());
        vector<std::vector<int> > res;
		vector<int> vec;
		subsetsWithDup(res, nums, vec, 0);
		return res;
    }

	void subsetsWithDup(std::vector<std::vector<int> > &res, vector<int> &nums, vector<int> &vec, int begin) {
		res.push_back(vec);
		for (int i = begin; i != nums.size(); ++i)
			if (i == begin || nums[i] != nums[i - 1]) { 
				vec.push_back(nums[i]);
				subsetsWithDup(res, nums, vec, i + 1);
				vec.pop_back();
			}
	}
};