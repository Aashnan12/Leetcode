class Solution {
public:

    int convert(int n,int base) {
        int copy = n;
        int i = 0;
        int sum=0;
        while(copy) {
            int d = copy%base;
            if(sum > INT_MAX/10){
                return sum;
            }
            sum = sum*base + pow(d,i);
            i++;
        }
        return sum;
    }

    bool palindrome(int temp,int num) {
        int copy = temp;
        int sum = 0;
        while(copy) {
            int d = copy%10;
            if(sum > INT_MAX/10){
                return false;
            }
            sum = sum*10 + d;
            copy = copy/10;
        }
        if(sum == num ) {
            return true;
        } 
        return false;
    }

    bool isStrictlyPalindromic(int n) {
        int temp = n;
        int base = 2;
        while(n-2) {
            int num = convert(n,base);
            if(!(palindrome(temp,num))) {
                return false;
            }
            base++;
            n--;
        }
        return true;
    }
};