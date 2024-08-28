class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int,int> mp;
        for(int num : nums2){
            while(stk.size()>0 && stk.top() < num){
                mp[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }

        vector<int> ans;
        for(int num : nums1){
            if(mp.find(num) != mp.end()){
                ans.push_back(mp[num]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};