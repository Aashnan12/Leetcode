class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++) {
            ans.push_back(ans[i] + gain[i]);
        }
        int max = ans[0];
        for(int i=1;i<ans.size();i++) {
            if(max < ans[i]) {
                max = ans[i];
            }
        }
        return max;
    }
};