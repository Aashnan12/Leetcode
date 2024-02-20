class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int m = grid[i].size();
            int e = m-1;
            int s = 0;
            while(s<=e){
                int mid = s+(e-s)/2;
                if(grid[i][mid]<0){
                    e = mid-1;
                }
                else {
                    s = mid+1;
                }
            }
            count += m-s;
        }
        return count;
    }
};