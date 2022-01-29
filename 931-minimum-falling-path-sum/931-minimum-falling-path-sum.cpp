class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int table[n][n];
        
        for(int i=0;i<n;i++)
            table[n-1][i]=matrix[n-1][i];//row prev ci-1
        
        int mini;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                mini=INT_MAX;
                if(i+1<n && j-1>=0)
                  mini=min(mini,table[i+1][j-1]);
                if(i+1<n)
                  mini=min(mini,table[i+1][j]);
                if(i+1<n && j+1<n)
                    mini=min(mini,table[i+1][j+1]);
                
                table[i][j]=matrix[i][j]+mini;
            }
        }
        
        mini=INT_MAX;

        for(int j=0;j<n;j++)
        {
            mini=min(mini,table[0][j]);//row 0
        }
        return mini;
    }
};