class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        int maxi = INT_MIN;
        for(char &ch : tasks){
            freq[ch-'A']++;
            maxi = max(freq[ch-'A'],maxi);
        }
        int ans = (maxi-1)*(n+1);
        for(int i=0;i<26;i++){
            if(maxi == freq[i])ans++;
        }
        return max(int(tasks.size()),ans);
    }
};