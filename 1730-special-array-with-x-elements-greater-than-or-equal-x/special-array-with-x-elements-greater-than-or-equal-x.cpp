// Space optimized Approach
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> bucket(n+1,0);

        for(int i=0;i<n;i++){
            bucket[min(n,nums[i])]++;
        }

        int cnt = 0;
        for(int i=n;i>=1;i--){
            cnt += bucket[i];
            if(i == cnt){
                return i;
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int specialArray(vector<int>& nums) {
//         int bucket[1001] = {0};
//         int n = nums.size();

//         for(int i=0;i<n;i++){
//             bucket[nums[i]]++;
//         }

//         for(int i=0;i<1001;i++){
//             if(i == n){
//                 return i;
//             }
//             n = n - bucket[i];
//         }
//         return -1;
//     }
// };