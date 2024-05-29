#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN, sum = 0, idx = -1, strt = -1, end = -1;
        int ele = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            ans = max(ans, sum);
            ele = max(ele, nums[i]);
            if (sum < 0)
                sum = 0;
        }
        if (ans == 0)
            ans = ele;
        return ans;
    }
};