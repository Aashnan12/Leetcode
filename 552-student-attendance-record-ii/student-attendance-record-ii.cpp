// Botton Up
class Solution {
public:
    int M = 1e9 + 7;

    int checkRecord(int n) {
        int t[100001][2][3];

        // Base Case
        for(int A = 0;A <= 1 ; A++){
            for(int L = 0;L <= 2; L++){
                t[0][A][L] = 1;
            }
        }

        for(int i=1 ;i <= n; i++){
            for(int A = 0;A <= 1 ; A++){
                for(int L = 0;L <= 2; L++){
                    long result = (A+1 <= 1) ? t[i-1][A+1][0] : 0; //Absent
                    result += (L+1 <= 2) ? t[i-1][A][L+1] : 0; // Late
                    result += t[i-1][A][0]; // present

                    t[i][A][L] = result % M;
                }
            }
        }

        return t[n][0][0];
    }
};





// Memoization
// class Solution {
// public:
//     int M = 1e9 + 7;
//     int t[100001][2][3];

//     int solve(int n,int absent,int cons_late){
//         if(absent > 1 || cons_late > 2) return 0; // pruning -> leaving extra cases Optimization.
//         if(n == 0) return 1; // Valid Case.

//         if(t[n][absent][cons_late] != -1){
//             return t[n][absent][cons_late];
//         }
//         int A = solve(n-1,absent+1,0) % M;
//         int L = solve(n-1,absent,cons_late+1) % M;
//         int P = solve(n-1,absent,0) % M;

//         return t[n][absent][cons_late] = ((A+L)%M + P)%M;
//     }

//     int checkRecord(int n) {
//         memset(t,-1,sizeof(t));
//         return solve(n,0,0);
//     }
// };