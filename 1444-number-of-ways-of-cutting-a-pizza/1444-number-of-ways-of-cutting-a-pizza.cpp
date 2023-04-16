class Solution {
public:
    int ways(vector<string>& pizza, int k) {
        int rows = pizza.size(), cols = pizza[0].size();

        // Initialize a 2D vector to store the number of 'A' toppings in each sub-rectangle of the pizza
        vector<vector<int>> apples(rows + 1, vector<int>(cols + 1));
        vector<vector<int>> f(rows, vector<int>(cols));
        for (int row = rows - 1; row >= 0; row--) {
            for (int col = cols - 1; col >= 0; col--) {
                apples[row][col] = (pizza[row][col] == 'A') + apples[row + 1][col] +
                                    apples[row][col + 1] - apples[row + 1][col + 1];
                f[row][col] = apples[row][col] > 0;
            }
        }

        const int mod = 1000000007;

        // Use dynamic programming to calculate the number of ways to cut the pizza into k pieces
        for (int remain = 1; remain < k; remain++) {
            vector<vector<int>> g(rows, vector<int>(cols));
            for (int row = 0; row < rows; row++) {
                for (int col = 0; col < cols; col++) {
                    // Calculate the number of ways to cut the pizza into k pieces such that the first piece contains the sub-rectangle starting at (row, col)
                    for (int next_row = row + 1; next_row < rows; next_row++) {
                        if (apples[row][col] - apples[next_row][col] > 0) {
                            g[row][col] += f[next_row][col];
                            g[row][col] %= mod;
                        }
                    }
                    for (int next_col = col + 1; next_col < cols; next_col++) {
                        if (apples[row][col] - apples[row][next_col] > 0) {
                            g[row][col] += f[row][next_col];
                            g[row][col] %= mod;
                        }
                    }
                }
            }
            // Copy g to f
            f = g;
        }

        return f[0][0];
    }
};
