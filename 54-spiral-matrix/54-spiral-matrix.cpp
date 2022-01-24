class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
       
        int i, k = 0, l = 0;
        
        while (k < m && l < n){
            //first row
            for (i = l; i < n; ++i){
                ans.push_back(matrix[k][i]);
            }
            k++;
        
            //last column
            for (i = k; i < m; ++i){
                ans.push_back(matrix[i][n - 1]);
            }
            n--;

            //last row
            if (k < m) {
                for (i = n - 1; i >= l; --i) {
                    ans.push_back(matrix[m - 1][i]);
                }
                m--;
            }

            //first column
            if (l < n) {
                for (i = m - 1; i >= k; --i)
                {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }return ans;  
        }
      
    
};
