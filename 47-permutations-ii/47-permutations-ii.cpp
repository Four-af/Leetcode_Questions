class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end() );
        // cout << "The 3! possible permutations with 3 elements:\n";
        vector<vector<int>> ress;
        int i=0;
        do {
            ress.push_back(nums);
            i++;
        } while (next_permutation(nums.begin(), nums.end()));

        return ress;
                 
       
    }
};