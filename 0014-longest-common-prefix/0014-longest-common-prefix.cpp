class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i=0;
        while(true){
            bool flag = false;
            char ch = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    return ans;
                }
                else if(ch == 0){
                    ch = str[i];
                }
                else if(str[i] != ch){
                    flag = true;
                    break;
                }
            }
            if(flag)break;
            ans.push_back(ch);
            i++;
        }
        return ans;
    }
};