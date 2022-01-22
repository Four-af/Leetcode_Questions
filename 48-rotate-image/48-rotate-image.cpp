class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        queue<int> q;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int j = 0;j<m;j++)
        {
           for(int i = n - 1;i>=0;i--)
           {
               q.push(matrix[i][j]);
           }
        }
        for(int i = 0;i<n;i++)
        {
           for(int j = 0;j<m;j++) {
                matrix[i][j] = q.front();
               q.pop();
           }
              
            
        }
    }
};