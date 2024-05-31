class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> map;

        for(auto &it : prerequisites){
            int u = it[0];
            int v = it[1];
            map[v].push_back(u);
        }
        
        vector<int> indegree(n + 1, 0);
        for(int i=0;i<n;i++){
            for(int &v : map[i]){
                indegree[v]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> topoSort;
        int courses = 0;

        while(!q.empty()){
            int v = q.front();
            q.pop();
            courses++;
            topoSort.push_back(v);

            for(auto &u : map[v]){
                indegree[u]--;
                if(indegree[u] == 0){
                    q.push(u);
                }
            }
        }
        if(n == courses){
            return topoSort;
        }
        return {};

    }
};