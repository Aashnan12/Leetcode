class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> set;
        for(int i : nums){
            if(i!=0){
                set.insert(i);
            }
        }
        return set.size();
    }
};