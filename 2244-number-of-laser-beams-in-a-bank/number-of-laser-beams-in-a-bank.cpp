class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        int count = 0;
        for(auto str : bank){
            count = 0;
            for(auto ch : str){
                if(ch == '1') count++;
            }
            if(count > 0) arr.push_back(count);
        }
        int res = 0;
        for(int i = 1;i<arr.size();i++){
            res = res + arr[i]*arr[i-1];
        }
        return res;
    }
};