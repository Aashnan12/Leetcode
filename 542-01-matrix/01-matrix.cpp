class Solution {
public:
    vector<vector<int>> dir{{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int,int>> q;
        //Process all 0 cells first.
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                }
                else{
                    mat[i][j] = -1; // Not processed
                }
            }
        }

        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            for(auto &it : dir){
                int new_i = i + it[0];
                int new_j = j + it[1];

                if(new_i < 0 || new_i >= m || new_j < 0 || new_j >= n || mat[new_i][new_j] != -1){
                    continue;
                }
                mat[new_i][new_j] = mat[i][j] + 1;
                q.push({new_i,new_j});
            }
        }
        return mat;
    }
};