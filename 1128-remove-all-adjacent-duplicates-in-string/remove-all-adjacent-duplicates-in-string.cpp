class Solution {
public:
    string removeDuplicates(string s) {
        // string str = "";
        // int i = 0;
        // while(s[i] != '\0'){
        //     if(str.size() > 0 && s[i]==str.back()){
        //         str.pop_back();
        //     }
        //     else{
        //         str.push_back(s[i]);
        //     }
        //     i++;
        // }
        // return str;
        int i=0,j=0;
        vector<int> count(s.size());
        while(j<s.size()){
            s[i] = s[j];
            count[i]= 1;
            if(i>0 && s[i-1] == s[i]){
                count[i] += count[i-1];
            }
            if(count[i] == 2){
                i -= 2;
            }
            i++,j++;
        }
        return s.substr(0,i);
    }
};