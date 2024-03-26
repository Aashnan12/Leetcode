class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n==numRows || numRows==1) return s;

        vector<string> zigzag(numRows);
        int i=0,row=0;
        int direction = 1;

        while(true){
            if(direction){
                while(i<n && row < numRows){
                    zigzag[row++].push_back(s[i++]);
                }
                row = numRows-2;
            }
            else{
                while(i<n && row >=0){
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            if(i>=n)break;
            direction = !direction;
        }
        string result = "";
        for(int i=0;i<numRows;i++){
            result += zigzag[i];
        }
        return result;
    }
};