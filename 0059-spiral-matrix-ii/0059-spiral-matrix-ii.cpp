class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral;
        spiral.resize(n, vector<int>(n));
        int total_element = n*n;
        int StartRow = 0;
        int EndCol = n-1;
        int EndRow = n-1;
        int StartCol = 0;
        int count = 1;
        while(count <= total_element)
        {
            for(int i=StartCol;i<=EndCol && count <= total_element;i++)
            {
                spiral[StartRow][i] = count;
                count++;
            }
            StartRow++;

            for(int i=StartRow;i<=EndRow && count <= total_element;i++)
            {
                spiral[i][EndCol] = count;
                count++;
            }
            EndCol--;

            for(int i=EndCol;i>=StartCol && count <= total_element;i--)
            {
                spiral[EndRow][i] = count;
                count++;
            }
            EndRow--;

            for(int i=EndRow;i>=StartRow && count <= total_element;i--)
            {
                spiral[i][StartCol] = count;
                count++;
            }
            StartCol++;
        }
        return spiral;
    }
};