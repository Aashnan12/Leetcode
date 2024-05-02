class Solution {
public:
    int findMaxK(vector<int>& nums) {

        vector<bool> pos(1001,false);
        vector<bool> neg(1001,false);

        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                neg[abs(nums[i])] = true;
            }
            else{
                pos[nums[i]] = true;
            }
        }

        int i = 1000;
        while(i>=0 && (!pos[i] || !neg[i])){
            i--;
        }
        return i;
    }
};