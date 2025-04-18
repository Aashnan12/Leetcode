class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> arr(n,0);
        
        for(auto edge : edges){
            arr[edge[1]]++;
        }
        int ans = 0,index = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                ans++;
                index = i;
            }
            if(ans > 1) return -1;
        }
        return index;
    }
};