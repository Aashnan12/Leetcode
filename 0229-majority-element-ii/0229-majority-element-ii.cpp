class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(auto num : nums){
            map[num]++;
        }
        for(auto num : map){
            if(num.second > nums.size()/3){
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};