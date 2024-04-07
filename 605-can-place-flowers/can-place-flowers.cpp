class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int size = arr.size(),i=0;
        if(size==1 && arr[0]==0 && n==1) return true;
        while(i<size){
            if(n<=0){
                return true;
            }
            else if(i==0 && arr[i]==0 && i+1<size && arr[i+1]==0){
                arr[i]=1;
                n--;
            }
            else if(i==size-1 && arr[i]==0 && i>0 && arr[i-1] == 0){
                arr[i]=1;
                n--;
            }
            else if(i>0 && i+1<size && arr[i]==0 && arr[i-1]==0 && arr[i+1]==0){
                arr[i]=1;
                n--;
            }
            i++;
        }
        return n<=0;
    }
};