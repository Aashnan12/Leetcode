class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(s==e){
                return nums[s];
            }
            if(mid%2==0){
                if(nums[mid] == nums[mid+1]){
                    s = mid+2;
                }
                else {
                    ans = nums[mid];
                    e = mid;
                }
            }
            else {
                if(nums[mid] == nums[mid-1]){
                    s = mid+1;
                }
                else {
                    e = mid-1;
                }
            }
        }
        return ans;
    }
};