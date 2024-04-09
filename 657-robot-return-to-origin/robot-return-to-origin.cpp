class Solution {
public:
    bool judgeCircle(string s) {
        // int hash[4] = {0};
        // for(auto &i : moves){
        //     if(i == 'U'){
        //         hash[0]++;
        //     }
        //     else if(i == 'D'){
        //         hash[1]++;
        //     }
        //     else if(i == 'R'){
        //         hash[2]++;
        //     }
        //     else{
        //         hash[3]++;
        //     }
        // }
        // return hash[0]==hash[1] && hash[2]==hash[3];
        int ud=0,lr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U') ud++;
            else if(s[i]=='D') ud--;
            else if(s[i]=='R') lr++;
            else lr--;
        }
        return !ud && !lr;
    }
};