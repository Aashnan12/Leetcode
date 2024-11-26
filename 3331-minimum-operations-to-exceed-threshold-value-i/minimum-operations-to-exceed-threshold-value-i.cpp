class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<int, vector<int> , greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(pq.top() < k){
            pq.pop();
            ans++;
        }
        return ans;
    }
};