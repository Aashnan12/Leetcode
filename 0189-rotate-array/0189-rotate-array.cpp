class Solution {
public:

    void rotate_array(vector<int>&nums,int start,int end) {
        while(start<end) {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        rotate_array(nums,0,size-1);
        rotate_array(nums,0,k-1);
        rotate_array(nums,k,size-1);
    }
};