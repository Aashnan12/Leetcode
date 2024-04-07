class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==t)return true;
        int idx=0;
        for(int i=0;i<t.size();i++){
            if(t[i] == s[idx])idx++;
        }
        return idx==s.size();
    }
};