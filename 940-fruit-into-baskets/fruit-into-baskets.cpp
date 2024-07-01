class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;

        int l=0,r=0,n=fruits.size(),maxlen = 0;

        while(r < n){
            mp[fruits[r]]++;
            while(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};