class Solution {
public:
    int countPrimes(int n) {
        vector<bool> sieve(n+1,true);
        sieve[0] = false;
        sieve[1] = false;
        int count = 0;
        
        for(int i=2;i<n;i++){
            if(sieve[i]){
                count++;
                int j = 2*i;
                while(j<n){
                    sieve[j] = false;
                    j += i;
                }
            }
        }
        return count;
    }
};