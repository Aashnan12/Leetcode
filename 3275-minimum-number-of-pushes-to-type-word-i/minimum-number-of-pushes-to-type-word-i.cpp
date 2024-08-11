// Better Solution
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(char& ch : word){
            freq[ch - 'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());

        int res = 0;

        for(int i=0;i<26;i++){
            int f = freq[i];
            int press = (i/8)+1;
            res += f*press;
        }
        return res;
    }
};

//Brute Force
// class Solution {
// public:
//     int minimumPushes(string word) {
//         unordered_map<int,int> mp;
//         int res = 0, idx = 2;
//         for(char& ch : word){
//             if(idx > 9){
//                 idx = 2;
//             }
//             mp[idx]++;
//             res += mp[idx];
//             idx++;
//         }
//         return res;
//     }
// };