#pragma GCC optimize("Ofast")
static auto _ = [] () {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int src, int destination) {

        unordered_map<int,vector<int>> mp;
        for(auto i : edges){
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(src);
        
        while(!q.empty()){
            int u = q.front();
            vis[u] = true;
            q.pop();
            if(u == destination) return true;

            for(int &v : mp[u]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        return false;
    }
};