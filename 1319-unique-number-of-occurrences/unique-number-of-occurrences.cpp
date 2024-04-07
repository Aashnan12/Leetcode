class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int hash[2001] = {0};
        for(int i : arr){
            hash[i+1000]++;
        }
        sort(begin(hash),end(hash));
        for(int i=1;i<2001;i++){
            if(hash[i] && hash[i-1] == hash[i])return false;
        }
        return true;
    }
};