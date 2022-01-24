class Solution {
public:
    int catalan_num(int n) {
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; ++i) {
            for(int j = 0; j < i; ++j) {
                dp[i] += dp[j]*dp[i-j-1];
            }
        }
        return dp[n];
    } 
    
    int numTrees(int n) {
        return catalan_num(n);
    }
};