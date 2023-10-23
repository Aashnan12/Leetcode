class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int i=0,ans;
        for(i=0;i<=n;i++) {
            int n = i,count=0;
            while(n > 0) {
                ans = n&1;
                if(ans == 1) {
                    count++;
                }
                n=n>>1;
            }
            v.push_back(count);
        }
        return v;
    }
};