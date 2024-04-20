class Solution {
public:
    int m;
    int n;
    vector<vector<int>> result;
    vector<vector<int>> directions{{0,1},{0,-1},{1,0},{-1,0}};

    // void dfs(vector<vector<int>>& land,int i,int j,int& r2,int& c2){
    //     land[i][j] = 0; // visited

    //     r2 = max(r2,i);
    //     c2 = max(c2,j);

    //     for(auto &dir : directions){
    //         int i_ = i + dir[0];
    //         int j_ = j + dir[1];

    //         if(i_ >= 0 && j_ >= 0 && i_ < m && j_ < n && land[i_][j_] == 1){
    //             dfs(land,i_,j_,r2,c2);
    //         }
    //     }
    // }

    void bfs(vector<vector<int>>& land,int i,int j,int& r2,int& c2){
        queue<pair<int,int>> q;
        q.push({i,j});

        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            r2 = max(r2,p.first);
            c2 = max(c2,p.second);
            for(auto &dir : directions){
                int i_ = p.first + dir[0];
                int j_ = p.second + dir[1];
                if(i_ >=0 && j_ >=0 && i_ < m && j_ < n && land[i_][j_] == 1){
                    land[i_][j_] = 0; // visited
                    q.push({i_,j_});
                }
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        m = land.size();
        n = land[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j] == 1){
                    int r1 = i;
                    int c1 = j;
                    int r2 = -1;
                    int c2 = -1;
                    bfs(land,i,j,r2,c2);
                    result.push_back({r1,c1,r2,c2});
                }
            }
        }
        return result;
    }
};