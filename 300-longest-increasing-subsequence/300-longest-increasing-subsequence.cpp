class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 1;
        vector<int> dp(n,1);
        int count=0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if (nums[i]>nums[j]){
                    dp[i] = max(dp[i], 1+dp[j]);
                }
                count = max(count, dp[i]);
            }
        }return count;
    }
};