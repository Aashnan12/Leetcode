class Solution {
public:
    static bool mycomp(const string &a,const string &b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for(auto num : nums){
            temp.push_back(to_string(num));
        }
        sort(temp.begin(),temp.end(),mycomp);
        if(temp[0] == "0") return temp[0];
        string res = "";
        for(auto s : temp){
            res += s;
        }
        return res;
    }
};