class Solution {
    public:
    
    void dfs(vector<vector<int>>& matrix, int i, int n){
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 1) {
                matrix[i][j] = 0;
                matrix[j][i] = 0;
                dfs(matrix, j, n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int numProvince = 0;
        
        for(int i = 0; i < n; i++) {
           if(matrix[i][i] == 1){
               dfs(matrix, i, n);
               numProvince++;
           }
        }
        return numProvince;
    }
};