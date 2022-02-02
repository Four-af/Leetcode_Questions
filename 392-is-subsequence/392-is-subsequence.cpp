class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int ps=0,pt=0;
        
        if(s=="" && t=="") return true;
        for(int i=0;i<t.size();i++)
        {
            if(s[ps]==t[pt])
            {
                ps++;
                pt++;
            }
            else
                pt++;
            
            
            if(ps==s.size()) return true;
                
        }
        return false;
    }
};
