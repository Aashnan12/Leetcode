class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j] += matrix[i][j-1]; // Rose wise prefix sum.
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                unordered_map<int,int> map;
                map[0] = 1;
                int sum = 0;
                for(int row = 0;row < m; row++){ // Move downward and apply lc 560 logic.
                    sum += matrix[row][j] - (i>0? matrix[row][i-1] : 0);
                    if(map.find(sum - k) != map.end()){
                        ans += map[sum-k];
                    }
                    map[sum]++;
                }
            }
        }
        return ans;
    }
};