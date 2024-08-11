class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int> mp;
        int res = 0, idx = 2;
        for(char& ch : word){
            if(idx > 9){
                idx = 2;
            }
            mp[idx]++;
            res += mp[idx];
            idx++;
        }
        return res;
    }
};