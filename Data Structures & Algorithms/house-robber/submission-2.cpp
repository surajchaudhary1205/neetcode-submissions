class Solution {
public:
    int rob(vector<int>& nums) {
        // dp[i] will represent ? 
        // what will be my states 
        // dp[i]= there are two states I can rob this house or I can rob previous house 
        // and left this house so dp[i-2]+nums[i], dp[i-1];
        // dp[i-1], dp[i-2] is the dp
        int n=nums.size();
        vector<int>dp(n,0);
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2; i<n; i++){
            dp[i]= max(dp[i-2]+ nums[i], dp[i-1]);
            cout<<dp[i]<<" ";
        } 
        cout<<endl;
        return max(dp[n-1],dp[n-2]);
    }
};
