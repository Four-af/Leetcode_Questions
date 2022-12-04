#define ll long long

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        ll res = 0,minimum = INT_MAX;
        ll sum = 0,n = nums.size();
        if(n == 1)
            return 0;
        for(auto i : nums)
            sum+=i;
        ll sum1 = 0,ans;
        for(int i = 0;i < n;i++){
            sum1 += nums[i];
            sum -= nums[i];
            if(i == n-1)
                 ans = abs((sum1/(i+1)) - (sum/(n)));
            else 
                ans = abs((sum1/(i+1)) - (sum/(n-i-1)));
            if(ans < minimum){
                minimum = ans;
                res = i;
            }
            // cout << res << " ";
        }
        return res;  }
    
};