class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string& str : details){
            string s = str.substr(11,2);
            int age = stoi(s);
            if(age > 60){
                ans++;
            }
        }
        return ans;
    }
};