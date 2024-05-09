class Solution {
public:
    long long maximumHappinessSum(vector<int>& A, int k) {
        long long  sum = 0;
        sort(A.begin(),A.end(),greater<int>());
        for(int i=0;i<k;i++){
            sum += max(0,A[i]-i);
        }
        return sum;
    }
};