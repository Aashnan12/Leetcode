class Solution {
public:
    int getCommon(vector<int>& arr, vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(i<arr.size() && j<nums.size()){
            if(arr[i] == nums[j]){
                return arr[i];
            }
            else if(arr[i] < nums[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
    }
};