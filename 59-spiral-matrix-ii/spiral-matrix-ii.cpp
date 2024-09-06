class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int size = n*n;
        int num = 1;
        vector<vector<int>> arr;
        arr.resize(n,vector<int>(n));
        int sr = 0;
        int er = n-1;
        int sc = 0;
        int ec = n-1;

        while(num <= size){
            for(int i = sc ; num <= size && i <= ec ; i++){
                arr[sr][i] = num;
                num++;
            }
            sr++;
            for(int i = sr ; num <= size && i <= er ; i++){
                arr[i][ec] = num;
                num++;
            }
            ec--;
            for(int i = ec; num <= size && i >= sc ; i--){
                arr[er][i] = num;
                num++;
            }
            er--;
            for(int i = er ; num <= size && i >= sr ; i--){
                arr[i][sc] = num;
                num++;
            }
            sc++;
        }
        return arr;
    }
};