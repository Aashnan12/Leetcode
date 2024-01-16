class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        set<pair<int,int>> ans;
        int n = nums.size();
        while(j<n && i<n){
            int diff = abs(nums[i] - nums[j]);
            if(diff == k && i!=j){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff < k){
                j++;
            }
            else {
                i++;
            }
        }
        return ans.size();
    }
};

