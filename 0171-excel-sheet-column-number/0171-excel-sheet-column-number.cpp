class Solution {
public:
    int titleToNumber(string arr) {
        int n = arr.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            int j = arr[i]-'A'+1;
            sum = sum*26+j;
        }
        return sum;
    }
};