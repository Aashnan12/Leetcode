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
    vector<int> dx{-1, 0, 1, 0};
    vector<int> dy{0, -1, 0, 1};

    int dfs(vector<vector<int>>& grid, int x, int y, int m, int n) {
        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0)
            return 0;

        int originalValue = grid[x][y];
        grid[x][y] = 0;
        int maxGold = 0;

        for (int dir = 0; dir < 4; ++dir) {
            int newX = x + dx[dir], newY = y + dy[dir];
            maxGold = max(maxGold, dfs(grid, newX, newY, m, n));
        }

        grid[x][y] = originalValue;
        return originalValue + maxGold;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int maxGold = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]!= 0)
                    maxGold = max(maxGold, dfs(grid, i, j, m, n));
            }
        }
        return maxGold;
    }
};