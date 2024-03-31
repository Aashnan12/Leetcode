class Solution {
public:
    long long countSubarrays(vector<int>& A, int minK, int maxK) {
        int mini = -1;
        int maxi = -1;
        int startindex = -1;
        long long int res = 0;
        for(int i=0;i<A.size();i++){
            if(A[i] < minK || A[i] > maxK) startindex = i;
            if(A[i] == minK) mini = i;
            if(A[i] == maxK) maxi = i;
            res += max(0,min(mini,maxi)-startindex);
        }
        return res;
    }
};