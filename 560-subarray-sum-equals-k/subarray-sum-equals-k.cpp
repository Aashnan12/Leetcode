// Optimized Solution.
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int sum = 0,ans = 0;
        map[0] = 1; // Edge Case in [1,-1].
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(map.find(sum - k) != map.end()){
                ans += map[sum - k];
            }
            map[sum]++;
        }
        return ans;
    }
};




// Brute Force O(n^2) -> Constraints bekar the isiliye jyada socha ni.
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int ans = 0, n = nums.size();
//         for(int i=0;i<n;i++){
//             int sum = 0;
//             for(int j=i;j<n;j++){
//                 sum += nums[j];
//                 if(sum == k){
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };