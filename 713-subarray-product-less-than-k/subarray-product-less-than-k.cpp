class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;

        int prod = 1,left = 0,result = 0;
        for(int right = 0; right < nums.size() ; right++){
            prod *= nums[right];
            while(prod >= k && left < nums.size()){
                prod /= nums[left];
                left++;
            }
            if(prod < k) result += right-left+1;
        }
        return result;
    }
};