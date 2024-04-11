class Solution {
public:
    string removeKdigits(string num, int k) {
        // stack<char> stack;
        // for(char &c : num){
        //     while(k>0 && !stack.empty() && c<stack.top()){
        //         stack.pop();
        //         k--;
        //     }
        //     stack.push(c);
        // }

        // while(k>0 && !stack.empty()){
        //     stack.pop();
        //     k--;
        // }

        // string res = "";
        // while(!stack.empty()){
        //     res += stack.top();
        //     stack.pop();
        // }
        // reverse(res.begin(),res.end());
        // int i=0;
        // while(res[i]=='0' && res[i] != '\0')i++;
        // cout<<i<<endl;
        // res = res.substr(i);
        // if(res.size() == 0){
        //     res.push_back('0');
        //     return res;
        // }
        // return res;

        // Better Approach

        string s = "";
        for(char &ch : num){
            while(s.size() && k>0  && s.back() > ch){
                k--;
                s.pop_back();
            }

            if(s.size() || ch!='0')s.push_back(ch);
        }
        while(s.size() && k--){
            s.pop_back();
        }
        return (s.size()==0)?"0":s;
    }
};