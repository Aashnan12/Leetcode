class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n==0 || n == 1) return 1;
        if(dp[n] != -1) return dp[n];
        dp[n] = solve(n-1,dp) + solve(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        // if(n==0 || n==1)return 1;
        // int a = 0;
        // int b = 1;
        // int num = 0;
        // while(n--){
        //     num = a + b;
        //     a = b;
        //     b = num;
        // }
        // return num;
        // if(n==0 || n==1) return 1;
        // return climbStairs(n-1) + climbStairs(n-2);
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};