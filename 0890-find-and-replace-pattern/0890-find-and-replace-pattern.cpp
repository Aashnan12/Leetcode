class Solution {
public:
    void CreateMapping(string& str){
        char start = 'a';
        char mapping[300] = {0};

        for(char ch : str){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }
        //Update original string with its mapping
        for(int i=0;i<str.size();i++){
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        CreateMapping(pattern);
        vector<string> ans;
        for(string str : words){
            string temp = str;
            CreateMapping(temp);
            if(temp == pattern){
                ans.push_back(str);
            }
        }
        return ans;
    }
};