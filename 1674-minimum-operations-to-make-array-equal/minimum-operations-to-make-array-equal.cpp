class Solution {
public:
    int minOperations(int n) {
        // int ans = 0;
        // for(int i=0;i<n/2;i++){
        //     ans = ans + n-(2*i+1);
        // }
        // return ans;
        return (n*n)/4;
    }
};