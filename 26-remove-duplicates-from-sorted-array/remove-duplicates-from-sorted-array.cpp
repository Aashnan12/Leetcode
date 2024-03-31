class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int i = 0,j = 1,n = A.size();
        while(j<n){
            if(A[i] == A[j]) j++;
            else A[++i] = A[j++];
        }
        return i+1;
    }
};