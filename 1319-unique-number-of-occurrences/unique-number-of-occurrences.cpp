class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Approach 1
        // int hash[2001] = {0};
        // for(int i : arr){
        //     hash[i+1000]++;
        // }
        // sort(begin(hash),end(hash));
        // for(int i=1;i<2001;i++){
        //     if(hash[i] && hash[i-1] == hash[i])return false;
        // }
        // return true;

        // Approach 2
        unordered_map<int,int> map;
        unordered_set<int> set;
        for(int &i:arr) map[i]++;
        for(auto it : map){
            if(set.contains(it.second)) return false;
            set.insert(it.second);
        }
        return true;
    }
};