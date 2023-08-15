class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int leftsum = 0;
        int totalsum = 0;
        int i = 0;

        while(i<nums.size())
        {
            totalsum += nums[i];
            i++;
        }
        
        i=0;

        while(i<nums.size())
        {
            if(totalsum - nums[i] == leftsum)
            return i;
            else
            {
                leftsum += nums[i];
                totalsum -= nums[i];
            }

            i++;
        }
        return -1;
    }
};