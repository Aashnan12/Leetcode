class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int i = 0,j = 1,n = A.size();
        while(j<n){
            if(A[i] == A[j]){
                j++;
            }
            else{
                i++;
                A[i] = A[j];
                j++;
            }
        }
        return i+1;
    }
};