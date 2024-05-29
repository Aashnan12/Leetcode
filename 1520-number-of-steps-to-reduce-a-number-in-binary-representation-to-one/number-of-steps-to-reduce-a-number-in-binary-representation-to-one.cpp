// class Solution {
// public:
//     int numSteps(string s) {
        
//     }
// };


//Brute Force
// Add one in case of odd and pop in case of even.
class Solution {
public:
    void addOne(string& s){
        int n = s.size();
        int i = n-1;
        while(i>=0 && s[i] != '0'){
            s[i] = '0';
            i--;
        }
        if(i<0){
            s = '1' + s;
        }
        else{
            s[i] = '1';
        }
    }
    int numSteps(string s) {
        int ans = 0;
        while(s.size() > 1){
            int n = s.size();
            if(s[n-1] == '0'){
                s.pop_back();
            }
            else{
                addOne(s);
            }
            ans++;
        }
        return ans;
    }
};