class Solution {
public:
    unordered_map<int,vector<pair<int,int>>> map;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        map.clear();

        for(auto &it : times){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            map[u].push_back({v,wt});
        }

        vector<int> dist(n+1,INT_MAX);
        vector<bool> vis(n+1,false);

        // We have to get minimum according to weight so, first is wt and second is node.
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        pq.push({0,k});
        dist[k] = 0;

        while(!pq.empty()){
            int parent = pq.top().second;
            int parent_wt = pq.top().first;
            pq.pop();
            
            if(vis[parent] ) continue;
            vis[parent] = true;

            for(auto &it : map[parent]){
                int child = it.first;
                int child_wt = it.second;
                //minimize the current weight.

                if(dist[parent] + child_wt < dist[child]){
                    dist[child] = dist[parent] + child_wt;
                    pq.push({dist[child],child});
                }
            }
        }
        int maxi = INT_MIN;
        for(int i=1;i<=n;i++){
            if(dist[i] != INT_MAX){
                maxi = max(maxi,dist[i]);
            }
            else{
                return -1;
            }
        }

        return maxi;

    }
};