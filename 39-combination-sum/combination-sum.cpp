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
            v.push_back(candidates[i]);
            solve(i,v,ans,candidates,target - candidates[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(0,v,ans,candidates,target);
        return ans;
    }
};