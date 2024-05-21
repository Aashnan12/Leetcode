class Solution {
public:
    void solve(vector<int>& nums,int i,vector<vector<int>>& Subsets,vector<int>& currsubset){
        if(i == nums.size()){
            Subsets.push_back(currsubset);
            return;
        }

        currsubset.push_back(nums[i]);
        solve(nums,i+1,Subsets,currsubset);
        currsubset.pop_back();
        solve(nums,i+1,Subsets,currsubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Subsets;
        vector<int> currsubset;

        solve(nums,0,Subsets,currsubset);
        
        return Subsets;
    }
};