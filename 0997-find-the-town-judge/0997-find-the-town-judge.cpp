class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> arr(n+1,0);
        for(auto person : trust){
            arr[person[0]]--;
            arr[person[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(arr[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};