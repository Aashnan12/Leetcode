class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ksum = 0;
        int i=0;
        while(i<k){
            ksum += nums[i];
            i++;
        }
        double maxi = ksum;
        while(i<nums.size()){
            ksum = ksum + nums[i] - nums[i-k];
            maxi = max(maxi,ksum);
            i++;
        }
        return maxi/k;
    }
};