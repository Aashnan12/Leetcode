class Solution {
public:
    bool isPowerOfTwo(int n) {

    int ans=1;
    for(int i=0;i<=sqrt(n)+1;i++)
    {
        if(n == ans)
        return 1;
        if(ans < INT_MAX/2)
        ans = ans * 2;
    }
    return 0;

        
        
    }
};