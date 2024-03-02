class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     nums[i] = nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        int left = 0;
        int right = nums.size()-1;
        int index = right;
        vector<int> ans(nums.size());
        while(left<=right){
            int num1 = nums[left]*nums[left];
            int num2 = nums[right]*nums[right];
            if(num1 > num2){
                ans[index] = num1;
                left++;
                index--;
            }
            else{
                ans[index] = num2;
                right--;
                index--;
            }
        }
        return ans;
    }
};