class Solution {
public:
    
    bool checkpalindrome(string s,int i,int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.length();
        if(n == 1 || n == 2)return true;

        int i = 0;
        int j = n-1;

        while(i<j){
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                bool check1 = checkpalindrome(s,i+1,j);
                bool check2 = checkpalindrome(s,i,j-1);
                return check1 || check2;
            }
        }
        return true;
    }
};