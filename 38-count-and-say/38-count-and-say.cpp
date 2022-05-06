class Solution {
public:
    void solve(string &ans)
    {
        int i = 1;
        int n = ans.length();
        string ans1 = "";
       int count = 1;
        char character = ans[0];
        
        while(i<n)
        {
            if(ans[i-1] != ans[i])
            {
                ans1+=to_string(count)+ans[i-1];
                count = 1;
                character = ans[i];
            }
            else
            {
                count++;
            }
            
            i++;
        }
        ans1+=to_string(count)+ans[i-1];
        ans="";
        ans+=ans1;
    }
    
    string countAndSay(int n) {
        
        if(n == 1)
            return "1";
        
        string ans = "1";
        
        for(int i =1;i<=n-1;i++)
        {
            solve(ans);
        }
        return ans;
    }
};