class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0,mini = INT_MAX;
        for(int n : nums){
            mini = min(mini,n);
        }
        for(int n : nums){
            ans += n - mini;
        }
        return ans;
    }
};