class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int& num : nums) {
            mp[num]++;
        }
        int result = 0;
        for (auto& it : mp) {
            int frq = it.second;

            if (frq == 1) {
                return -1;
            }
            result += ceil((double)frq / 3);
        }
        return result;
    }
};
