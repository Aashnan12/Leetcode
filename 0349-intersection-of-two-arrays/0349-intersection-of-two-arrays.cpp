class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //Approach 1 Using Set TC : O(n^2)
        // set<int> set;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i] == nums2[j]){
        //             set.insert(nums1[i]);
        //         }
        //     }
        // }
        // vector<int> ans;
        // for(auto s : set){
        //     ans.push_back(s);
        // }
        // return ans;

        // Approach 2 Using Map
        unordered_map<int,int> map;
        vector<int> ans;
        for(auto i : nums1){
            map[i]++;
        }
        for(auto i : nums2){
            if(map.find(i) != map.end()){
                ans.push_back(i);
                map.erase(i);
            }
        }
        return ans;
    }
};