class Solution {
public:
    int n;
    unordered_map<int,vector<int>> map;

    void dfs(int i,vector<bool>& vis){
        vis[i] = true;
        for(int &u : map[i]){
            if(!vis[u]){
                dfs(u,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& mat) {
        int provinces = 0;
        n = mat.size();
        map.clear();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && mat[i][j] == 1){
                    map[i].push_back(j);
                    map[j].push_back(i);
                }
            }
        }

        vector<bool> vis(n+1,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                provinces++;
                dfs(i,vis);
            }
        }

        return provinces;
    }
};