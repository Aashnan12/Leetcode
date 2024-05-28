class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i] = abs(s[i] - t[i]);
        }
        int maxi = 0;
        int currcost = 0;
        int i = 0,j = 0;
        while(i<n){
            currcost += arr[i++];
            while(j<i && currcost >  maxCost){
                currcost -= arr[j++];
            }
            maxi = max(maxi,i-j);
        }
        return maxi;
    }
};