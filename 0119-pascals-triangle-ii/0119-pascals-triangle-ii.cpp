class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows = rowIndex;
        numRows++;
        vector<vector<int>> p(numRows);
        p[0].push_back(1);
        for(int i=1; i<numRows; i++){
            p[i].push_back(1);
            for(int j=0; j<p[i-1].size()-1; j++){
                p[i].push_back(p[i-1][j]+p[i-1][j+1]);
            }
            p[i].push_back(1);
        }
        return p[rowIndex];
    }
};