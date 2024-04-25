class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.size(),result = 0,longest ,idx,left,right;

        vector<int> dp(26,0);

        for(int i=0;i<n;i++){
            idx = s[i] - 'a';
            left = max(0,idx-k);
            right = min(25,idx+k);
            longest = 0;
            for(int curr = left ; curr <= right; curr++){
                longest = max(longest,dp[curr]);
            }

            dp[idx] = max(dp[idx],longest+1);
            result = max(result,dp[idx]);
        }

        return result;
    }
};