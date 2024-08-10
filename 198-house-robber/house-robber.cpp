class Solution {
public:
    int dp[401];
    int solve(vector<int>& nums,int i,int n){
        if(i >= n){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int take = nums[i] + solve(nums,i+2,n);
        int skip = 0 + solve(nums,i+1,n);
        return dp[i]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,nums.size());
    }
};