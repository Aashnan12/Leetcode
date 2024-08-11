class Solution {
public:
    void NoOfIsland(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j] == 0){
            return;
        }
        grid[i][j] = 0;
        NoOfIsland(grid,i+1,j,m,n);
        NoOfIsland(grid,i-1,j,m,n);
        NoOfIsland(grid,i,j+1,m,n);
        NoOfIsland(grid,i,j-1,m,n);
    }

    int countIsland(vector<vector<int>> grid,int m,int n){
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    cnt++;
                    NoOfIsland(grid,i,j,m,n);
                }
            }
        }
        return cnt;
    }

    int minDays(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if(countIsland(grid,m,n) != 1){
            return 0; // disconnected.
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;

                    cout<<"Hie"<<endl;
                    
                    if(countIsland(grid,m,n) != 1){
                        return 1;
                    }

                    grid[i][j] = 1;

                    // for(int i=0;i<m;i++){
                    //     for(int j=0;j<n;j++){
                    //         cout<<grid[i][j]<<" ";
                    //     }
                    //     cout<<endl;
                    // }
                    cout<<"Hello"<<endl;
                }
            }
        }
        return 2;
    }
};