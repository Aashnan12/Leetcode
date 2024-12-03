class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0;
        string res = "";
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