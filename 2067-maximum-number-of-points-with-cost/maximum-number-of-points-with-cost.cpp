class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m = points.size();
        int n = points[0].size();
        vector<long long> prev(n);

        for(int i=0;i<n;i++){
            prev[i] = points[0][i];
        }

        for(int i=0;i<m-1;i++){
            vector<long long> right(n,0), left(n,0) , curr(n,0);

            left[0] = prev[0];
            right[n-1] = prev[n-1];

            for(int j=1;j<n;j++){
                left[j] = max(left[j-1]-1,prev[j]);
            }
            for(int j=n-2;j>=0;j--){
                right[j] = max(right[j+1]-1,prev[j]);
            }
            for(int j=0;j<n;j++){
                curr[j] = points[i+1][j] + max(left[j],right[j]);
            }
            prev = curr;
        }

        return *max_element(prev.begin(),prev.end());
    }
};