class Solution {
public:
 

int trap(vector<int> a)
{
    int ans = 0;
    int n = a.size();
    vector<int> p(n), s(n);
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = max(p[i - 1], a[i]);
    }
    s[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        s[i] = max(s[i + 1], a[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        ans += min(p[i], s[i]) - a[i];
    }
    return ans;
}
    // int trap(vector<int>& height) {
        
    // }
};