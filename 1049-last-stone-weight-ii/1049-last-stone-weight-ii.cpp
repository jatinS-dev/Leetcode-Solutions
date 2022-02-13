class Solution {
public:
    int knapsack(vector<int>& stones, int limit) {
        int n = stones.size();
        int dp[n+1][limit+1];
        
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= limit; j++) {
                if(j == 0 or i == 0) dp[i][j] = 0;
                else {
                    dp[i][j] = dp[i-1][j];
                    if(j >= stones[i-1]) 
                        dp[i][j] = max(dp[i][j],stones[i-1]+dp[i-1][j-stones[i-1]]);
                }
            }
        }
        
        return dp[n][limit];
    }
    
    int lastStoneWeightII(vector<int>& stones) {
        int sum = accumulate(stones.begin(),stones.end(),0);
        int y = knapsack(stones,sum/2);
        return sum-2*y;
    }
};