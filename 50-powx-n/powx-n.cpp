class Solution {
public:
    double myPow(double x, int n) {
        bool flag = n>0;
        n = abs(n);
        double power = 1;
        while(n > 0){
            if((n&1)){
                power *= x;
            }
            x = x*x;
            n = n>>1;
        }
        return flag ? power : 1.00000/power;
    }
};