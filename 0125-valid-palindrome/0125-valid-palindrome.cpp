class Solution {
public:
    
    string RemoveNonAlpha(string s) {
        string temp = "";
        int i = 0;
        while(s[i] != '\0'){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                temp += s[i];
            }
            i++;
        }
        cout<<temp;
        return temp;
    }

    bool isPalindrome(string s) {
        s = RemoveNonAlpha(s);

        if(s.empty())return true;
        int i = 0;
        int j = s.length() - 1;
        cout<<i<<" "<<j;
        while(i<j){
            if(s[i] != s[j])return false;
            i++;
            j--;
        }
        return true;
    }
};