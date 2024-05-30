class Solution {
public:
    int countTriplets(vector<int>& arr) {
        unordered_map<int,vector<int>> map;
        map[0].push_back(-1);
        int k = 0,ans = 0;

        for(int i=0;i<arr.size();i++){
            k = k^arr[i];
            if(map.find(k) != map.end()){
                for(auto idx : map[k]){
                    ans += (i-idx) - 1;
                }
            }
            map[k].push_back(i);
        }
        return ans;
    }
};