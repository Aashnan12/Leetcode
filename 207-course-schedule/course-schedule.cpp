//Using DFS
// class Solution {
// public:
//     bool isCycle(int u,unordered_map<int,vector<int>>& map,vector<bool>& vis,vector<bool>& inRecursion){
//         vis[u] = true;
//         inRecursion[u] = true;

//         for(int &v : map[u]){
//             if(!vis[v] && isCycle(v,map,vis,inRecursion)){
//                 return true;
//             }
//             else if(inRecursion[v]){
//                 return true;
//             }
//         }
//         inRecursion[u] = false;
//         return false;
//     }
//     bool canFinish(int n, vector<vector<int>>& prerequisites) {
//         unordered_map<int,vector<int>> map;
//         for(vector<int>& v : prerequisites){
//             map[v[1]].push_back(v[0]);
//         }

//         vector<bool> inRecursion(n+1,false);
//         vector<bool> vis(n+1,false);

//         for(int i=0;i<n;i++){
//             if(!vis[i] && isCycle(i,map,vis,inRecursion)){
//                 return false; // If cycle , cannot complete courses.
//             }
//         }
//         return true;
//     }
// };


// Using BFS
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> map;
        for(vector<int>& v : prerequisites){
            map[v[1]].push_back(v[0]);
        }

        vector<int> indegree(n+1,0);
        for(int i=0;i<n;i++){
            for(int &u : map[i]){
                indegree[u]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int courses = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            courses++;
            for(int &u : map[v]){
                indegree[u]--;
                if(indegree[u] == 0){
                    q.push(u);
                }
            }
        }
        return courses >= n;
    }
};