class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> map;
        int maxi = INT_MIN;
        for(int i : tasks){
            map[i]++;
            maxi = max(maxi,map[i]);
        }
        int ans = (maxi-1)*(n+1);
        for(auto i : map){
            if(i.second == maxi){
                ans++;
            }
        }
        return max((int)tasks.size(),ans);
    }
};