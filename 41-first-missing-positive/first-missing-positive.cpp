class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] <= 0) {
                nums[i] = n+1;
            }
        }

        for(int i=0;i<n;i++){
            int idx = abs(nums[i]);
            if(idx <= n &&  nums[idx-1] > 0){
                nums[idx-1] *= -1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] > 0){
                return i+1;
            }
        }
        return n+1;
    }
};