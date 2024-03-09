class Solution {
public:
    int myAtoi(string s) {
        int i=0,sign = 1;
        int n = s.size();
        int ans = 0;
        while(i<n && s[i] == ' '){
            i++;
        }
        if(i<n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-')?-1:1;
            i++;
        }
        while(i<n && s[i] >= '0' && s[i] <= '9'){
            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && s[i] - '0' > INT_MAX % 10)){
                return (sign == -1)?INT_MIN : INT_MAX;
            }
            ans = ans*10 + (s[i] - '0');
            i++;
        }
        return (sign == -1)?-ans:ans;
    }
};