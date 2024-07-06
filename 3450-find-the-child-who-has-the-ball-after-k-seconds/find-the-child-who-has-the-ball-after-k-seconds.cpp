class Solution {
public:
    int numberOfChild(int n, int k) {
        // int x = k % (2 * (n - 1));
    
        // if (x < n) {
        //     return x;
        // } else {
        //     return 2 * (n - 1) - x;
        // }

        int direction,i=0;
        while(k--){
            if(i == 0){
                direction = 1;
            }
            else if(i == n-1){
                direction = -1;
            }

            i += direction;
        }

        return i;
    }
};

