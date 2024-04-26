#pragma GCC optimize("Ofast")
static auto _ = [] () {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

void dfs(unordered_map<int,vector<int>> &map,vector<bool> &vis,int u){
    vis[u] = true;

    for(int &v : map[u]){
        if(!vis[v]){
            dfs(map,vis,v);
        }
    }
    return ;
}

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>> map;
        int m=isConnected.size(),n=isConnected.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1){
                    map[i].push_back(j);
                    map[j].push_back(i);
                }
            }
        }
        int pro = 0;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i] == false){
                pro++;
                dfs(map,vis,i);
            }
        }
        return pro;
    }
};