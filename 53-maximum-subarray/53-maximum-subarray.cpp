class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxTillNow = INT_MIN, maxEnd = 0;
        for (int i = 0; i < n; i++)
        {
            maxEnd = maxEnd + nums[i];
            if (maxTillNow < maxEnd)
                maxTillNow=maxEnd;

            if (maxEnd < 0)
                maxEnd = 0;
        }
        return maxTillNow;
    }
};