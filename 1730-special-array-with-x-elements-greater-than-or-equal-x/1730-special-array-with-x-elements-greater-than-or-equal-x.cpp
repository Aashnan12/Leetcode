class Solution {
public:
    int specialArray(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<=len;i++) {
            int flag = 0,x = i;
            for(int j=0;j<len;j++) {
                if(nums[j] >= x) {
                    flag++;
                }
            }
            if(x == flag) {
                return x;
            }
        }
        return -1;
    }
};