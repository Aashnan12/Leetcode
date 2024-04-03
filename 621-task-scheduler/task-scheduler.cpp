class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int hash[26] = {0};
        int maxi = INT_MIN;
        for(char ch : tasks){
            hash[ch-'A']++;
            maxi = max(maxi,hash[ch-'A']);
        }
        int ans = (maxi-1)*(n+1);
        for(int i=0;i<26;i++){
            if(hash[i] == maxi) ans++;
        }
        return max((int)tasks.size(),ans);
    }
};