class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end(),greater<int>());
        long long sum = 0LL;
        long long mini = INT64_MAX;
        int n = beans.size();
        for(int i=0;i<n;i++){
            sum += beans[i];
        }
        for(int i=0;i<n;i++){
            mini = min(mini,sum - (long long)(beans[i]) * (i+1));
        }
        return mini;
    }
};