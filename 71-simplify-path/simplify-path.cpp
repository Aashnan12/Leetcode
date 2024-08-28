class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        stack<string> stk;

        while(getline(ss,token,'/')){
            if(token == "." || token == ""){
                continue;
            }
            else if(token == ".."){
                if(stk.size()){
                    stk.pop();
                }
            }
            else{
                stk.push(token);
            }
        }
        if(stk.empty()) return "/";

        string res = "";
        while(!stk.empty()){
            res = "/" + stk.top() + res;
            stk.pop();
        }
        return res;
    }
};