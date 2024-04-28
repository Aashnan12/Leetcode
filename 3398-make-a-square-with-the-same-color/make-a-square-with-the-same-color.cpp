class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int w=0,b=0;

        //First Box
        grid[0][0]=='W'?w++:b++;
        grid[0][1]=='W'?w++:b++;
        grid[1][0]=='W'?w++:b++;
        grid[1][1]=='W'?w++:b++;
        if(w >= 3 || b >= 3) return true;
        w=0,b=0;

        //Second Box
        grid[0][1]=='W'?w++:b++;
        grid[0][2]=='W'?w++:b++;
        grid[1][1]=='W'?w++:b++;
        grid[1][2]=='W'?w++:b++;
        if(w >= 3 || b >= 3) return true;
        w=0,b=0;

        //Third Box
        grid[1][0]=='W'?w++:b++;
        grid[1][1]=='W'?w++:b++;
        grid[2][0]=='W'?w++:b++;
        grid[2][1]=='W'?w++:b++;
        if(w >= 3 || b >= 3) return true;
        w=0,b=0;

        //Fourth Box
        grid[1][1]=='W'?w++:b++;
        grid[1][2]=='W'?w++:b++;
        grid[2][1]=='W'?w++:b++;
        grid[2][2]=='W'?w++:b++;
        if(w >= 3 || b >= 3) return true;
        w=0,b=0;
        
        return false; //Not Possible
    }
};