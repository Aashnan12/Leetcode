class Solution {
public:
    void dfs(unordered_map<int,vector<int>> &map,vector<bool> &vis,int u){
        vis[u] = true;
        for(int &v : map[u]){
            if(!vis[v]){
                dfs(map,vis,v);
            }
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>> map;
        int n = isConnected.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j && isConnected[i][j] == 1){
                    map[i].push_back(j);
                    map[j].push_back(i);
                }
            }
        }
        int pro = 0;
        vector<bool> vis(n+1,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                pro++;
                dfs(map,vis,i);
            }
        }
        return pro;
    }
};