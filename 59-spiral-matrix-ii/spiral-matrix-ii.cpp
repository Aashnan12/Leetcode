class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral;
        spiral.resize(n,vector<int>(n));

        int startrow = 0;
        int startcol = 0;
        int endcol = n-1;
        int endrow = n-1;

        int size = n*n;
        int count = 1;

        while(count <= size){
            for(int i=startcol;i<=endcol && count<=size;i++){
                spiral[startrow][i] = count;
                count++;
            }
            startrow++;
            
            for(int i=startrow;i<=endrow && count<=size;i++){
                spiral[i][endcol] = count;
                count++;
            }
            endcol--;

            for(int i=endcol;i>=startcol && count<=size;i--){
                spiral[endrow][i] = count;
                count++;
            }
            endrow--;

            for(int i=endrow;i>=startrow && count<=size;i--){
                spiral[i][startcol] = count;
                count++;
            }
            startcol++;

        }
        return spiral;
    }
};