class Solution {
public:
    int countAsterisks(string s) {
        int bar = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '*' && bar%2==0){
                ans++;
            }
            else if(s[i] == '|'){
                bar++;
            }
        }
        return ans;
    }
};