class Solution {
public:
    string mapping(string s){
        char hash[256] = {0},start = 'a';
        int i=0;
        while(s[i] != '\0'){
            if(hash[s[i]] == 0){
                hash[s[i]] = start;
                start++;
            }
            i++;
        }
        string ans = "";
        i = 0;
        while(s[i] != '\0'){
            ans.push_back(hash[s[i]]);
            i++;
        }
        return ans;
    }
    bool isIsomorphic(string s, string t) {
        return mapping(s)==mapping(t);
    }
};