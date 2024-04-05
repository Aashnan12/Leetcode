class Solution {
public:
    string makeGood(string s) {
        vector<char> str;
        for(char &ch : s){
            if(!str.empty() && abs(ch-str.back())==32){
                str.pop_back();
            }
            else{
                str.push_back(ch);
            }
        }
        string res;
        for(auto &ch : str){
            res += ch;
        }
        return res;
    }
};