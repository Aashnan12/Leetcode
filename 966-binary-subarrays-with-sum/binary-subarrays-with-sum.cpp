class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int prefix = 0;
        unordered_map<int,int> map;
        map[0] = 1;
        for(auto i : nums){
            prefix += i;
            if(map.find(prefix - goal) != map.end()){
                res += map[prefix-goal];
            }
            map[prefix]++;
        }
        return res;
    }
};