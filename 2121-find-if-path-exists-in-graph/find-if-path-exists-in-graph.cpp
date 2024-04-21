#pragma GCC optimize("Ofast")
static auto _ = [] () {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    bool dfs(unordered_map<int,vector<int>> &mp,vector<bool> &vis, int src, int des){
        if(src == des) return true;

        vis[src] = true;

        for(auto &v : mp[src]){
            if(!vis[v]){
                if(dfs(mp,vis,v,des)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        unordered_map<int,vector<int>> mp;
        for(auto i : edges){
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);

        if(dfs(mp,vis,source,destination)){
            return true;
        }
        return false;
    }
};