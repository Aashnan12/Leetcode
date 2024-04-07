class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<vector<int>> ans(2);
        for(int &i : nums1){
            set1.insert(i);
        }
        for(int &i : nums2){
            set2.insert(i);
        }
        for(int i : nums1){
            if(!set2.contains(i)){
                ans[0].push_back(i);
                set2.insert(i);
            }
        }
        for(int i : nums2){
            if(!set1.contains(i)){
                ans[1].push_back(i);
                set1.insert(i);
            }
        }
        return ans;
    }
};