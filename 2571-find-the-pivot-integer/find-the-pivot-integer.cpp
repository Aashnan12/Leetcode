class Solution {
public:
    int pivotInteger(int n) {
        int s = 1;
        int e = n;
        int sum = n*(n+1)/2;
        while(s<e){
            int mid = s+(e-s)/2;
            if(mid*mid - sum < 0){
                s = mid+1;
            }
            else {
                e = mid;
            }
        }
        return s*s-sum==0?s:-1;
    }
};