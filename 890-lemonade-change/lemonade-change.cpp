class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a = 0, b = 0, c = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5){
                a++;
            }
            else if(bills[i] == 10){
                if(a == 0)return false;
                a--;
                b++;
            }
            else{
                if(a>0 && b>0){
                    a -= 1;
                    b -= 1;
                }
                else if(a>=3){
                   a -= 3;
                }
                else{
                    return false;
                }
                c++;
            }
        }
        return true;
    }
};