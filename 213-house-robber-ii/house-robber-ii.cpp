class Solution {
public:
    int dp[1001];
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
        if(nums.size() == 1) return nums[0];
        memset(dp,-1,sizeof(dp));
        int op1 = solve(nums,0,nums.size()-1);
        memset(dp,-1,sizeof(dp));
        int op2 = solve(nums,1,nums.size());
        return max(op1,op2);
    }
};