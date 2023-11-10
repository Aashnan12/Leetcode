class Solution {
public:
    bool isPalindrome(int x) {
        int num=0;
        int numcopy = x;
        if(x < 0) {
            return false;
        }
        while(x != 0) {
            int d = x % 10;
            if(num > INT_MAX/10) {
                return false;
            }
            num = num*10 + d;
            x = x/10;
        }
        if(num == numcopy) {
            return true;
        }
        return false;
    }
};