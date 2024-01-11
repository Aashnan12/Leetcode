class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        int n = a.size();
        if(n == 1)return 0;
        sort(a.begin(),a.end());
        int i = 0;
        int j = 1;
        int count = 0;
        set<pair<int,int>> ans;
        while(i < n && j < n){
            int diff = a[j] - a[i];

            if(diff == k && i!=j){
                ans.insert({a[i],a[j]});
                i++;
                j++;
            }
            else if(diff > k){
                i++;
            }
            else {
                j++;
            }
        }
        return ans.size();
    }
};