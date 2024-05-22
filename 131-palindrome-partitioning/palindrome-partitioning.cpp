class Solution {
public:
    bool isPossible(string &str,int s,int e){
        while(s<e){
            if(str[s++] != str[e--]){
                return false;
            }
        }
        return true;
    }
    void solve(string &s ,int idx, vector<string>& path, vector<vector<string>>& result){
        if(idx == s.size()){
            result.push_back(path);
            return;
        }

        for(int i = idx; i<s.size(); i++){
            if(isPossible(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));

                solve(s,i+1,path,result);

                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;

        solve(s,0,path,result);

        return result;
    }
};