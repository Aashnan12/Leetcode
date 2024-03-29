class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;
        bool flag;
        char ch;
        while(true){
            flag = false;
            ch = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    return ans;
                }
                else if(ch == 0){
                    ch = str[i];
                }
                else if(ch != str[i]){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            ans.push_back(ch);
            i++;
        }
        return ans;
    }
};