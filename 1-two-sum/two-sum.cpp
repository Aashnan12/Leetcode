class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> A = nums; // good practice;

        unordered_map<int,vector<int>> map; //for index mapping as index's will be lost after sort.
        int n = A.size();
        for(int i=0;i<n;i++){
            map[A[i]].push_back(i);
        }
        sort(A.begin(),A.end());
        int s = 0,e = n-1;

        while(s<=e){
            int sum = A[s] + A[e];
            if(sum == target){
                if(A[s] == A[e]){
                    return {map[A[s]][0],map[A[e]][1]};
                }
                return {map[A[s]][0],map[A[e]][0]};
            }
            else if(sum < target){
                s++;
            }
            else{
                e--;
            }
        }
        return {-1,-1};
    }
};