class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto i:nums){
            ans[i]++;
        }
        int maxi = 0;
        int freq = 0;
        for(auto i:ans){
            if(i.second > maxi){
                maxi = i.second;
                freq = 1;
            }
            else {
                if(i.second == maxi){
                    freq++;
                }
            }
        }
        return maxi*freq;
    }
};