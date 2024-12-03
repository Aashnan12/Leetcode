class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0;
        string res = "";
        res.reserve(s.size() + spaces.size());
        for(int j = 0;j<s.size();j++){
            if(i<spaces.size() && spaces[i] == j){
                res += " ";
                i++;
            }
            res += s[j];
        }
        return res;
    }
};