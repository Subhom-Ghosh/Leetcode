class Solution {

private:
    int solve(int step,vector<int>&dp){
        if(step==0){
            return 1;
        }
        if(step<0){
            return 0;
        }
        if(dp[step]!=-1){
            return dp[step];
        }

        int oneStep = solve(step-1,dp);
        int twoStep = solve(step-2,dp);
        dp[step] = oneStep+twoStep;
        return dp[step];
    }

public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};