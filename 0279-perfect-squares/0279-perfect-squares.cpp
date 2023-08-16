class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX); // Initialize the dp array with large values.
        dp[0] = 0; // Base case: zero perfect squares needed to make 0.
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        
        return dp[n];
    }
};