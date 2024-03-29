class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        int s = 0;
        int e = arr.size()-1;
        int num;
        while(s<e){
            num = arr[s]+arr[e];
            if(num == t){
                return {s+1,e+1};
            }
            else if(num > t){
                e--;
            }
            else{
                s++;
            }
        }
        return {};
    }
};