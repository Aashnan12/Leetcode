class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int sum = 0;
        for(int z=0;z<=j;z++)
        {
            sum += nums[z];
        }
        int max = sum ;
        j++;
        while(j < nums.size()) {
            sum = sum - nums[i++] + nums[j++];
            max = max>sum?max:sum;
        }
        return max/double(k);
    }
};