class Solution {
public:
    int solve(vector<int> &nums,int i,int Xor){
        if(i == nums.size()){
            return Xor;
        }
        
        
        int include = solve(nums,i+1,nums[i] ^ Xor);
        
        int exclude = solve(nums,i+1,Xor);

        return include + exclude;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};




// class Solution {
// public:
//     void solve(vector<int> &nums,int i,vector<int> &currsubset,vector<vector<int>> &subsets){
//         if(i == nums.size()){
//             subsets.push_back(currsubset);
//             return;
//         }
        
//         currsubset.push_back(nums[i]);
//         solve(nums,i+1,currsubset,subsets);
//         currsubset.pop_back();
//         solve(nums,i+1,currsubset,subsets);
//     }
//     int subsetXORSum(vector<int>& nums) {
//         int maxi = 0;
//         vector<vector<int>> subsets;
//         vector<int> currsubset;

//         solve(nums,0,currsubset,subsets);

//         for(vector<int> &subset : subsets){
//             int Xor = 0;
//             for(int &i : subset){
//                 Xor = Xor^i;
//             }
//             maxi += Xor;
//         }
//         return maxi;
//     }
// };