class Solution {
public:
    string solve(string s){
        string str = "";
        for(auto ch : s){
            if(ch >= 'A' && ch <= 'Z'){
                ch += 32;
                str += ch;
            }
            else if((ch >= 'a' && ch <= 'z') || ( ch >= '0' && ch <= '9')){
                str += ch;
            }
        }
        return str;
    }
    bool isPalindrome(string s) {
        s = solve(s);
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i++] != s[j--])return false;
        }
        return true;
    }
};