class Solution {
public:
    bool canPlaceFlowers(vector<int>& A, int n) {
        int size = A.size();
        if(size==1 && A[0]==0 && n==1) return true;
        for(int i=0;i<size;i++){
            if(n<=0)return true;
            if(i==0 && A[i]==0 && i+1<size && A[i+1]==0){
                A[i]=1;
                n--;
            }
            if(i==size-1 && A[i]==0 && i-1>0 && A[i-1]==0){
                A[i]=1;
                n--;
            }
            if(i>0 && i+1<size && A[i]==0 && A[i-1]==0 && A[i+1]==0){
                A[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};