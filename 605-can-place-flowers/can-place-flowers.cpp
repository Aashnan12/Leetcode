class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(arr.size()==1 && arr[0]==0 && n==1) return true;
        for(int i=0;i<arr.size();i++){
            if(n<=0){
                return true;
            }
            if(i==0 && arr[i]==0 && i+1<arr.size() && arr[i+1]==0){
                arr[i]=1;
                n--;
            }
            if(i==arr.size()-1 && arr[i]==0 && i-1>0 && arr[i-1]==0){
                arr[i]=1;
                n--;
            }
            if(i>0 && i+1<arr.size() && arr[i]==0 && arr[i-1]==0 && arr[i+1]==0){
                arr[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};