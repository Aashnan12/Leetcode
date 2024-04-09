class Solution {
public:
    int maxOperations(vector<int>& A, int k) {
        sort(A.begin(),A.end());
        int i=0,j=A.size()-1,maxi=0,sum=0;
        while(i<j){
            sum = A[i]+A[j];
            if(sum==k){
                maxi++;
                i++;
                j--;
            }
            else if(sum < k){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};