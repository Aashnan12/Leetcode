class Solution {
public:
    int t[101][101][101];
    int solve(int i,vector<int>& nums,int n, int k, int op1, int op2) {
        if(i >= n) return 0;
        if(t[i][op1][op2] != -1) return t[i][op1][op2];
        
        int ans = INT_MAX;

        //Do Nothing
        ans = min(ans,nums[i] + solve(i+1,nums,n,k,op1,op2));

        //Apply op1
        if(op1>0){
            ans = min(ans,(nums[i]+1)/2 + solve(i+1,nums,n,k,op1-1,op2));
        }

        //Apply op2
        if(op2>0 && nums[i] >= k){
            ans = min(ans,(nums[i]-k) + solve(i+1,nums,n,k,op1,op2-1));
        }

        //Apply Both (Order Matters
        if(op1>0 && op2>0){
            int apply1 = (nums[i]+1)/2;
            if(apply1 >= k){
                ans = min(ans,(apply1-k) + solve(i+1,nums,n,k,op1-1,op2-1));
            }
            if(nums[i] >= k){
                int apply2 = nums[i] - k;
                ans = min(ans,(apply2+1)/2 + solve(i+1,nums,n,k,op1-1,op2-1));
            }
        }
        return t[i][op1][op2] = ans;
    }
    int minArraySum(vector<int>& nums, int k, int op1, int op2) {
        int n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(0,nums,n,k,op1,op2);
    }
};