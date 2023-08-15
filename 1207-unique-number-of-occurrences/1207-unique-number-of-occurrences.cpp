class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
 
    int l=arr.size();
    int a[l],z=0;
    for(int i=0;i<l;i++)
    {
        int freq=1;
        if(arr[i]!='\0')
        {
            for(int j=i+1;j<l;j++)
            {
                if(arr[i]==arr[j])
                {
                    freq++;
                    arr[j]='\0';
                }
            }
            a[z]=freq;
            z++;
        }
    }
    for(int i=0;i<z;i++)
    {
        for(int j=i+1;j<z;j++)
        {
            if(a[i]==a[j])
            return false;
        }
    }
    return true;
    }
};