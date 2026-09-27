class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         // so you can start from 0 or 1 index 
         // dp[1]=min(cost[1],cost[0]);
         // it depends dp[2] = min(dp[1], dp[0]) + cost[i]; 
         // at 2nd step what info I will be carrying I could come from dp[1], dp[0]
         // if I am coming from dp[1]
         // Problem is this 
         int n=cost.size();
         vector<int>dp(n+1,0);
         dp[0]=cost[0];
         dp[1]=cost[1];
         // we can always start from 1 ? 
         for(int i=2; i<n; i++){
            dp[i]=min(dp[i-1], dp[i-2])+cost[i];
         }
         dp[n] = min(dp[n-1], dp[n-2]);
         return dp[n];
    }
};
