class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int digits = floor(log10(nums[i]) + 1);
            if(digits & 1) continue;
            else count++;
        }
        return count;
    }
};