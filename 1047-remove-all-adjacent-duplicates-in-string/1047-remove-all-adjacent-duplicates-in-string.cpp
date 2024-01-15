class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        int i = 0;
        
        while(s[i] != '\0') {
            if(str.size() > 0 && s[i] == str.back()){
                str.pop_back();
            }
            else {
                
                str.push_back(s[i]);
            }
            i++;
        }
        return str;
    }
};