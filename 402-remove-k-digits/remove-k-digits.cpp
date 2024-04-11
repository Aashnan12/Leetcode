class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stack;
        for(char &c : num){
            while(k>0 && !stack.empty() && c<stack.top()){
                stack.pop();
                k--;
            }
            stack.push(c);
        }

        while(k>0 && !stack.empty()){
            stack.pop();
            k--;
        }

        string res = "";
        while(!stack.empty()){
            res += stack.top();
            stack.pop();
        }
        reverse(res.begin(),res.end());
        int i=0;
        while(res[i]=='0' && res[i] != '\0')i++;
        cout<<i<<endl;
        res = res.substr(i);
        if(res.size() == 0){
            res.push_back('0');
            return res;
        }
        return res;
    }
};