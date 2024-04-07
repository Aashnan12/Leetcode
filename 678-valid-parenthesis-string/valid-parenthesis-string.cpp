class Solution {
public:
    bool checkValidString(string s) {
        int cmin=0,cmax=0;
        for(char &ch : s){
            if(ch == '('){
                cmin++;
                cmax++;
            }
            else if(ch == ')'){
                cmax--;
                cmin--;
            }
            else{
                cmax++;
                cmin--;
            }
            if(cmax < 0) return false;
            cmin = max(cmin,0);
        }
        return cmin==0;
    }
};