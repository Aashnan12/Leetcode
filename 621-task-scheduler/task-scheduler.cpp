class Solution {
public:
    int leastInterval(vector<char>& A, int n) {
        int hash[26] = {0};
        int maxi = 0;
        for(int i=0;i<A.size();i++){
            hash[A[i] - 'A']++;
            maxi = max(maxi,hash[A[i] - 'A']);
        }

        int count = (maxi-1)*(n+1);

        for(int i=0;i<26;i++){
            if(hash[i] == maxi){
                count++;
            }
        }
        return max(count,(int)A.size());
    }
};