class Solution {
public:
    // Approach :->
    // Left -> Right Remove Extra Closed Brackets.
    // Right -> Left Remove Extra Open Brackets.
    string minRemoveToMakeValid(string s) {
        int n = s.size(),count = 0;
        // Left->right
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')'){
                if(count == 0){
                    s[i] = '$';
                }
                else{
                    count--;
                }
            }
        }
        // Right->Left
        count = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == ')'){
                count++;
            }
            else if(s[i] == '('){
                if(count == 0){
                    s[i] = '$';
                }
                else{
                    count--;
                }
            }
        }
        string res = "";
        for(int i=0;i<n;i++){
            if(s[i] != '$'){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};