// class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) {
//         int ans = 0;
//         priority_queue<int, vector<int> , greater<int>> pq;
//         for(int i=0;i<nums.size();i++){
//             pq.push(nums[i]);
//         }
//         while(pq.top() < k){
//             pq.pop();
//             ans++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // Sort the array to process smallest elements first
        sort(nums.begin(), nums.end());

        int ans = 0;
        for (int num : nums) {
            if (num >= k) break; // Stop when reaching an element >= k
            ans++;
        }
        return ans;
    }
};
