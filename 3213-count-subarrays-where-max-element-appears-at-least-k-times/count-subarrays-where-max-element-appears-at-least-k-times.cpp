class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int a = *max_element(nums.begin(),nums.end()), n = nums.size(), curr = 0, i = 0;
        long long res = 0;
        for(int j=0;j<n;j++){
            curr  += (nums[j] == a);
            while(curr >= k){
                curr -= (nums[i++] == a);
            }
            res += i;
        }
        return res;
    }
};