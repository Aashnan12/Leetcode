class Solution {
public:
    int m,n,peri;

    void dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=m  || j>=n || grid[i][j] == 0){
            peri++;
            return;
        }
        if(grid[i][j] == -1) {
            return;
        }

        grid[i][j] = -1;

        dfs(grid,i+1,j); // down
        dfs(grid,i-1,j); // up
        dfs(grid,i,j+1); // right
        dfs(grid,i,j-1); // left
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        peri = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    dfs(grid,i,j);
                    return peri;
                }
            }
        }
        return -1;
    }
};







// class Solution {
// public:
//     int islandPerimeter(vector<vector<int>>& grid) {
//         int perimeter = 0;
//         int rows = grid.size();
//         int cols = grid[0].size();
        
//         for (int r = 0; r < rows; r++) {
//             for (int c = 0; c < cols; c++) {
//                 if (grid[r][c] == 1) {
//                     perimeter += 4;
//                     if (r > 0 && grid[r-1][c] == 1) {
//                         perimeter -= 2;
//                     }
//                     if (c > 0 && grid[r][c-1] == 1) {
//                         perimeter -= 2;
//                     }
//                 }
//             }
//         }
        
//         return perimeter;
//     }
// };