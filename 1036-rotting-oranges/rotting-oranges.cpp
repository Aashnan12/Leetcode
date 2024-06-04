class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        int fresh = 0;

        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int maxtime = 0;
        int freshcount = 0;
        int drow[] = {-1,1,0,0};
        int dcol[] = {0,0,1,-1};

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            maxtime = max(maxtime,t);

            for(int i=0;i<4;i++){
                int x = r + drow[i];
                int y = c + dcol[i];
                if(x<0 || y<0 || x>=n || y>=m || grid[x][y] != 1){
                    continue;
                }
                grid[x][y] = 2;
                q.push({{x,y},t+1});
                freshcount++;
            }
        }

        if(fresh != freshcount) return -1;
        return maxtime;
    }
};