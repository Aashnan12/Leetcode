class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr2.size();i++){
            mp[arr2[i]] = i;
        }
        sort(arr1.begin(),arr1.end(),[&mp](int &a,int &b){
            if(mp.count(a) && mp.count(b)){
                return mp[a] < mp[b];
            }
            else if(mp.count(a)){
                return true;
            }
            else if(mp.count(b)){
                return false;
            }
            else{
                return a<b;
            }
        });
        return arr1;
    }
};

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         vector<int> freq(1001,0);
//         vector<int> ans;

//         for(int num : arr1){
//             freq[num]++;
//         }

//         for(int num : arr2){
//             while(freq[num] > 0){
//                 ans.push_back(num);
//                 freq[num]--;
//             }
//         }
//         for(int i=0;i<1001;i++){
//             while(freq[i] > 0){
//                 ans.push_back(i);
//                 freq[i]--;
//             }
//         }
//         return ans;
//     }
// };