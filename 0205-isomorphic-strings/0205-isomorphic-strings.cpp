class Solution {
public:
    string CreateMapping(string s){
        char mapping[300] = {0};
        char start = 'a';
        for(auto ch:s){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }
        string ans = "";
        for(auto ch:s){
            ans.push_back(mapping[ch]);
        }
        return ans;
    }
    bool isIsomorphic(string s, string t) {
        s = CreateMapping(s);
        t = CreateMapping(t);
        for(int i=0;i<s.size();i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};