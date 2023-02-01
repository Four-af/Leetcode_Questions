class Solution {
public:
    bool cal(string str,string ans)
    {
        int n=str.size();
        int m=ans.size();
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]!=ans[idx])
                return false;
            idx++;
            idx%=m;
        }
        return true;
    }
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        int ss=__gcd(n,m);
        string ans=str1.substr(0,ss);
        if(cal(str1,ans) and cal(str2,ans))
            return ans;
        return "";
    }
};