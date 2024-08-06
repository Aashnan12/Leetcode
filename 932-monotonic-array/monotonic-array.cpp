class Solution {
public:
    bool checkInc(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }

    bool checkDec(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) return false;
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
        return checkInc(nums) || checkDec(nums);
    }
};