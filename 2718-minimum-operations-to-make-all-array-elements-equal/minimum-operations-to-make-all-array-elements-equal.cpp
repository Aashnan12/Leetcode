#include <vector>
#include <algorithm>

class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        
        vector<long long> prefix(nums.size() + 1, 0);
        for (int i = 1; i <= nums.size(); ++i) {
            prefix[i] = prefix[i - 1] + nums[i - 1];
        }
        
        vector<long long> ans;
        for (int i = 0; i < queries.size(); ++i) {
            auto it = lower_bound(nums.begin(), nums.end(), queries[i]);
            int idx = it - nums.begin();
            long long before = idx * 1LL * queries[i] - prefix[idx];
            long long after = prefix[nums.size()] - prefix[idx] - (nums.size() - idx) * 1LL * queries[i];
            ans.push_back(before + after);
        }
        
        return ans;
    }
};
