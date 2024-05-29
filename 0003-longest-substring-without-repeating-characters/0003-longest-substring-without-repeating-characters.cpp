#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0;
         int n = s.size();
        vector<int> m(256, -1);
        int len = 0;
        while (r < n)
        {
            if (m[s[r]] != -1)
            {
                l = max(l, m[s[r]]+1);
            }
            m[s[r]] = r;
            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};