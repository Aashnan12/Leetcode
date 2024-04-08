class Solution {
public:
    void solve(int idx,string &s,string &temp,vector<string> &result,unordered_map<char,string> &mp){
        if(idx >= s.size()){
            result.push_back(temp);
            return;
        }
        char ch = s[idx];
        string str = mp[ch];
        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            solve(idx+1,s,temp,result,mp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string> result;
        string temp = "";
        unordered_map<char,string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        solve(0,digits,temp,result,mp);
        return result;
    }
};