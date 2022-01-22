class Solution {
public:
    
    int tribbi(vector<int>& dp, int n) {
        if(n==0)return 0;
        if(n==1||n==2) return 1;
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = tribbi(dp, n-1)+tribbi(dp, n-2)+tribbi(dp, n-3);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        int ans = tribbi(dp, n);
        return ans;
    }
};