class Solution {
public:
    
    string expand(string s ,int i,int j){
        while(i>=0 && j<s.size() && s[i] == s[j]){
            i--;
            j++;
        }
        return s.substr(i+1,j-i-1);
    }
    
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            string odd = expand(s,i,i);
            string even = expand(s,i,i+1);
            if(ans.size() < odd.size()) {
                ans = odd;
            }
            if(ans.size() < even.size()) {
                ans = even;
            }
        }
        return ans;
    }
};