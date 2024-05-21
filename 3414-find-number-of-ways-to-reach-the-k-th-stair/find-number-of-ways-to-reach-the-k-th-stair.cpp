class Solution {
public:
    unordered_map<string,int> map;

    int solve(int k,int i,int jump,int canjumpback){
        if(i > k+1){
            return 0;
        }
        string key = to_string(i) + '_' + to_string(jump) + '_' + to_string(canjumpback);
        if(map.find(key) != map.end()){
            return map[key];
        }

        int ways = 0;
        if(i == k){
            ways += 1;
        }
        if(canjumpback == 1){
            ways += solve(k,i-1,jump,0);
        }
        ways += solve(k,i + pow(2,jump),jump+1,1);
        return map[key] = ways;
    }
    int waysToReachStair(int k) {
        map.clear();
        return solve(k,1,0,1);
    }
};