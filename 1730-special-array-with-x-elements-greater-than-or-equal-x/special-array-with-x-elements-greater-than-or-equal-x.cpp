class Solution {
public:
    int specialArray(vector<int>& nums) {
        int bucket[1001] = {0};
        int n = nums.size();

        for(int i=0;i<n;i++){
            bucket[nums[i]]++;
        }

        for(int i=0;i<1001;i++){
            if(i == n){
                return i;
            }
            n = n - bucket[i];
        }
        return -1;
    }
};