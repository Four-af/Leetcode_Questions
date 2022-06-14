class Solution {
public:
    
    int longestCommonSubsequence(string ss, string tt) {
        int nn = ss.size();
        int mm = tt.size();
        //finding longest common subsequence via tabulation
        vector<vector<int>> dp(nn+1,vector<int>(mm+1,0));
        for(int i=1;i<=nn;i++)
        {
            for(int j=1;j<=mm;j++)
            {
                if(ss[i-1] == tt[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[nn][mm];
    }
    
    
    int minDistance(string word1, string word2) {
        int ll=word1.size()+word2.size();
        int cmn=0;
        if(word1.size()>=word2.size()){ 
            cmn=longestCommonSubsequence(word1,word2);
        }
        else{
            cmn=longestCommonSubsequence(word2,word1);
        }
        /*chars to delete = (word1 length - longest subs length) + (word2 length - longest subs length)
        chars to delete = (word1 + word2 length)- 2*(lenght of longest subsequence)*/
        return ll-2*(cmn);
    }
};