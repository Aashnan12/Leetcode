#pragma GCC optimize("Ofast")
static auto _ = [] () {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    vector<vector<int>> directions {{-1,0}, {1,0} , {0,-1},{0,1}};
    int dfs(vector<vector<int>> &grid,int i,int j,int m,int n){
        if(i>=m || i<0 || j>=n || j<0 || grid[i][j]==0){
            return 0;
        }

        int originalvalue = grid[i][j];
        grid[i][j] = 0;
        int maxgold = 0;

        for(auto& dir : directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            maxgold = max(maxgold, dfs(grid,new_i,new_j,m,n));
        }

        grid[i][j] = originalvalue;
        return originalvalue + maxgold;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int maxgold = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0){
                    maxgold = max(maxgold, dfs(grid,i,j,m,n));
                }
            }
        }
        return maxgold;
    }
};