class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int count = 0;
        int size = a.size();
        int i=0;
        if(size == 1) return a[0]==0 ||n==0;
        for(int i=0;i<size;i++){
            if(n<=0) return true;
            if(i==0 && a[i]==0 && i+1 < size && a[i+1]==0){
                a[i] = 1;
                n--;
            }
            if(i==size-1 && a[i]==0 && i-1 >=0 && a[i-1]==0){
                a[i] = 1;
                n--;
            }
            if(i>0 && i+1 < size && a[i]==0 && a[i-1]==0 && a[i+1]==0){
                a[i] = 1;
                n--;
            }
        }
        return n<=0;
    }
};