class Solution {
public:
    
    //a very good explaination by https://leetcode.com/problems/matchsticks-to-square/discuss/1275625/JS-Python-Java-C%2B%2B-or-Easy-Optimized-Backtracking-Solution-w-Explanation
    //refer it
        int side_length;
    bool btrack(int i, int space, int pairs_made, vector<int>& M) {
        if (pairs_made == 3)
            return true;
        
        for (; i < M.size(); i++) {
            int num = M[i];
            bool res;
            if (num > space)
                continue;
            M[i] = side_length + 1;
            if (num == space)
                res = btrack(1, side_length, pairs_made+1, M);//starting from 1 bcz M[0] already present
            else
                res = btrack(i+1, space-num, pairs_made, M);
            if (res)
                return true;
            M[i] = num;
            while (i < M.size() and M[i+1] == num)
                i++;
        }
        return false;
    }

    
    bool makesquare(vector<int>& M) {
        sort(M.begin(), M.end(), greater<int>());

        int total = accumulate(M.begin(), M.end(), 0);
        side_length = total / 4;
        if ((float)total / 4 > side_length || M[0] > side_length)
            return false;
        return btrack(0, side_length, 0, M);
    }
};