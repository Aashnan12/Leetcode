class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums,k) - atMostK(nums,k-1);
    }
    int atMostK(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        int res = 0;
        unordered_map<int,int> count;
        for(int j=0;j<n;j++){
            if(!count[nums[j]]++) k--;
            while(k<0){
                if(!--count[nums[i]]) k++;
                i++;
            }
            res += j-i+1;
        }
        return res;
    }
};