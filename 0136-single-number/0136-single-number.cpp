class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int Unique = 0;

        for(int i=0;i<n;i++) {
            Unique = Unique ^ nums[i];
        }

        return Unique;
    }
};