class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        int left,right;

        for(left=0;left<size;left++){
            if(nums[left]==target){
                ans.push_back(left);
                break;
            }
        }
        for(right=size-1;right>=left;right--){
            if(nums[right]==target){
                ans.push_back(right);
                break;
            }
        }
        while(ans.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};