class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,leftsum=0;
        for(int &i : nums){
            sum += i;
        }
        for(int i=0;i<nums.size();i++){
            if(sum - nums[i] == leftsum) return i;
            sum -= nums[i];
            leftsum += nums[i];
        }
        return -1;
    }
};