class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(auto ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                stack.push(ch);
            }
            else {
                if((!stack.empty())&&((stack.top()=='(' && ch== ')')||(stack.top()=='{' && ch== '}')||(stack.top()=='[' && ch== ']'))){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(stack.empty())return true;
        return false;
    }
};