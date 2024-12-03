// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         int i = 0;
//         string res = "";
//         res.reserve(s.size() + spaces.size());
//         for(int j = 0;j<s.size();j++){
//             if(i<spaces.size() && spaces[i] == j){
//                 res += " ";
//                 i++;
//             }
//             res += s[j];
//         }
//         return res;
//     }
// };

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        string res(n + m, ' '); // Pre-allocate the size for the result string
        int i = 0, j = 0, k = 0;

        while (j < n) {
            if (i < m && spaces[i] == j) {
                k++; // Move to the next position in `res` for the space
                i++; // Move to the next space index
            }
            res[k++] = s[j++]; // Add the character from the original string
        }
        
        return res;
    }
};
