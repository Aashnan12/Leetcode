class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;
        int count = 0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                int j = 2*i;
                while(j<n){
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return count;
    }
};