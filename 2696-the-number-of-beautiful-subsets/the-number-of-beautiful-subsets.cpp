class Solution {
public:
    void solve(vector<int>& nums,int i,unordered_map<int,int>& map,int &count,int &k){
        if(i >= nums.size()){
            count++;
            return;
        }

        solve(nums,i+1,map,count,k);

        if(!map[nums[i]-k] && !map[nums[i]+k]){
            map[nums[i]]++;
            solve(nums,i+1,map,count,k);
            map[nums[i]]--;
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> map;

        solve(nums,0,map,count,k);
        return count-1;

    }
};