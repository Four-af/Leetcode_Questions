class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // vector<bool> dp(s.size()+1, false);
        vector<bool> dp(s.size()+1, 0);
        dp[0] = 1;
        for(int i=0; i<=s.size(); i++)
            for(int j=0; j<i; j++)
                if((dp[j]) && (find(wordDict.begin(), wordDict.end(), s.substr(j,i-j)) != wordDict.end())){
                    dp[i] = 1;
                    break;
                }
        return dp.back();
//         dp[0] = true;

//         for (int i = 1; i <= s.size(); i++)
//             for (int j = 0; j < i; j++)
//                 if ((dp[j]) && (find(wordDict.begin(), wordDict.end(), s.substr(j, i-j)) != wordDict.end())) {
//                     dp[i] = true;
//                     break;
//                 }
//         return dp.back();
    }
};

