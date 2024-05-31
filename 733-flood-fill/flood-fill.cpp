class Solution {
public:
    int m,n;
    void dfs(int i,int j,vector<vector<int>>& mat,int startcolor,int newcolor){
        if(i<0 || j<0 || i>=m || j>=n || mat[i][j] != startcolor){
            return;
        }
        mat[i][j] = newcolor;

        dfs(i+1,j,mat,startcolor,newcolor);
        dfs(i-1,j,mat,startcolor,newcolor);
        dfs(i,j+1,mat,startcolor,newcolor);
        dfs(i,j-1,mat,startcolor,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& mat, int sr, int sc, int newcolor) {
        m = mat.size();
        n = mat[0].size();

        int startcolor = mat[sr][sc];

        if(startcolor != newcolor)dfs(sr,sc,mat,startcolor,newcolor);

        return mat;
    }
};