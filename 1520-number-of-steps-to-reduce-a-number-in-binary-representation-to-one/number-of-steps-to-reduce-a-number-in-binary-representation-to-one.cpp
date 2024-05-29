// Optimal approach
//Even -> 1 operation.
//Odd -> 2 operations.
// Ex = 1101 , its odd to we first add one 1110 then we pop 0 to make it 111 . ie 2 operations for odd.
class Solution {
public:
    int numSteps(string s) {
        int carry = 0,operations = 0;
        for(int i=s.size()-1;i>0;i--){
            if((s[i] - '0' + carry) & 1) { // Odd Check
                operations += 2;
                carry = 1;
            }
            else{
                operations++;
            }
        }
        return operations + carry;
    }
};


//Brute Force
// Add one in case of odd and pop in case of even.
// class Solution {
// public:
//     // Convert all 1's to 0's , till we find 0 , then convert this 0 to 1. Basically add 1 to string logicl.
//     void addOne(string& s){
//         int n = s.size();
//         int i = n-1;
//         while(i>=0 && s[i] != '0'){
//             s[i] = '0';
//             i--;
//         }
//         if(i<0){ // All 1's case handle.
//             s = '1' + s;
//         }
//         else{
//             s[i] = '1';
//         }
//     }
//     int numSteps(string s) {
//         int ans = 0;
//         while(s.size() > 1){
//             int n = s.size();
//             if(s[n-1] == '0'){
//                 s.pop_back();
//             }
//             else{
//                 addOne(s);
//             }
//             ans++;
//         }
//         return ans;
//     }
// };