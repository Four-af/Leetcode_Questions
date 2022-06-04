class Solution
{
public:
    bool is_pos_safe(vector<vector<char>> &chess, int row, int col)
    {
        for (int i = row - 1; i >= 0; i--)
            if (chess[i][col] == 'Q')
                return false;
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (chess[i][j] == 'Q')
                return false;
        for (int i = row - 1, j = col + 1; i >= 0 && j < chess.size(); i--, j++)
            if (chess[i][j] == 'Q')
                return false;
        return true;
    }
    void solve(vector<vector<char>> &chess, int row, int &ans)
    {
        if (row == chess.size())
        {
            ans += 1;
            return;
        }
        for (int i = 0; i < chess.size(); i++)
        {
            if (is_pos_safe(chess, row, i))
            {
                chess[row][i] = 'Q';
                solve(chess, row + 1, ans);
                chess[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n)
    {
        vector<vector<char>> chess(n, vector<char>(n, '.'));
        int ans = 0;
        solve(chess, 0, ans);
        return ans;
    }
};