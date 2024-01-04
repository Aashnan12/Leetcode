class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()/2;i++)
        {
            int n = matrix[i].size();
            for(int j=0;j<n/2 + n%2;j++)
            {
                int temp = matrix[n-i-1][j];
                matrix[n-i-1][j] = matrix[n-j-1][n-i-1];
                matrix[n-j-1][n-i-1] = matrix[i][n-j-1];
                matrix[i][n-j-1] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};