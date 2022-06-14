class Solution {
public:
    int totalSteps(vector<int>& A) {
			int n = A.size(), steps = 0;
			vector<int> dp(n);
			stack<int> stack;
    
        for (int i=n-1 ; i>=0 ; i--) {
            while(!stack.empty() && A[i] > A[stack.top()]) {
                dp[i] = max(++dp[i], dp[stack.top()]);
                stack.pop();
                steps = max(steps, dp[i]);
            }
            stack.push(i);
        }

        return steps;
    }
};