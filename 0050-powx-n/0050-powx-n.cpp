class Solution {
public:
    double myPow(double x, long long int n) {
        double ans = 1;
        bool flag = n<0?true:false;
        n = abs(n);
        while(n>0){
            if(n&1){
                ans = ans*x;
            }
            x = x*x;
            n >>= 1;
        }
        if(flag)return 1.00000/ans;
        return ans;
    }
};