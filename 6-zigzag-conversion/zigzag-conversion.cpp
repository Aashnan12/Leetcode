class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.length();
        if(len < 3 || numRows == 1) {
            return s;
        }
        vector<string> vec(numRows);
        int i = 0,j = 0;
        string s1 = "";

        while(i < len){
            while(j < numRows && i < len) {
                vec[j++] += s[i++];
            }
            if(j == numRows) {
                j = numRows - 2;
            }
            while( j >= 0 && i < len) {
                vec[j--] += s[i++];
            }
            if(j == -1) {
                j = 1;
            }
        }
        for(i = 0; i < numRows ; i++) {
            s1 += vec[i];
        }
        return s1;
    }
};