class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),sum1=0,sum2=0;

        for(int i=0;i<n;i++){
            sum1 += nums1[i];
            sum2 += nums2[i];
        }

        return (sum2 - sum1)/n;
    }
};