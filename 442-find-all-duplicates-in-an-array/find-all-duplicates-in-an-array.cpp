class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        for(auto i:nums){
            int index = abs(i)-1;
            if(nums[index] < 0){
                result.push_back(index+1);
            }
            nums[index] *= -1;
        }
        return result;
    }
};