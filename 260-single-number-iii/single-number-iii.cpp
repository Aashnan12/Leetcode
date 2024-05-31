class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int &i : nums){
            map[i]++;
        }
        vector<int> res;
        for(auto &p : map){
            if(p.second == 1){
                res.push_back(p.first);
            }
        }
        return res;
    }
};