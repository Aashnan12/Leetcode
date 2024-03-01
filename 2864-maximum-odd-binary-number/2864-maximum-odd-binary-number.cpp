class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        int zeros = 0;
        for(auto i:s){
            if(i == '0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        string ans ="";
        while(ones != 1){
            ans.push_back('1');
            ones--;
        }
        while(zeros){
            ans.push_back('0');
            zeros--;
        }
        ans.push_back('1');
        return ans;
    }
};