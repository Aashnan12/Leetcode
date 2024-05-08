class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int n = score.size();
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        vector<string> ans(n);
        vector<string> rank = {"Gold Medal","Silver Medal","Bronze Medal"};
        int count = 1;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(count < 4){
                ans[it.second] = rank[count-1];
            }
            else{
                ans[it.second] = to_string(count);
            }
            count++;
        }
        return ans;
    }
};