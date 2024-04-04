class Solution {
public:
    int maxDepth(string s) {
        int res=0,count=0,n=s.size();
        for(char &ch : s){
            if(ch == '('){
                count++;
                res = max(res,count);
            }
            if(ch == ')'){
                count--;
            }
        }
        return res;
    }
};