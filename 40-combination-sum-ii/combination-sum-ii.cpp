class Solution {
public:
    void solve(int idx,vector<int>& v,vector<vector<int>>& ans,vector<int>& candidates, int target) {
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0){
            return;
        }

        for(int i = idx; i < candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;
            v.push_back(candidates[i]);
            solve(i+1,v,ans,candidates,target - candidates[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        solve(0,v,ans,candidates,target);
        return ans;
    }
};