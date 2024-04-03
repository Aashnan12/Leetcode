class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
    //     sort(num1.begin(),num1.end());
    //     sort(num2.begin(),num2.end());
    //     int i=0,j=0,m=num1.size(),n=num2.size();
    //     set<int> set;
    //     while(i<m && j<n){
    //         if(num1[i] == num2[j]){
    //             set.insert(num1[i]);
    //             i++;
    //             j++;
    //         }
    //         else if(num1[i] < num2[j]){
    //             i++;
    //         }
    //         else {
    //             j++;
    //         }
    //     }
    //     vector<int> ans;
    //     for(auto i : set){
    //         ans.push_back(i);
    //     }
    //     return ans;
    // }
    unordered_map<int,int> mp;
    for(int i : num1){
        mp[i]++;
    }
    vector<int> ans;
    for(int i : num2){
        if(mp.find(i) != mp.end()){
            ans.push_back(i);
            mp.erase(i);
        }
    }
    return ans;
    }
};