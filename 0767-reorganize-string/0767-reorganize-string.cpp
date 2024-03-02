class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        char maxc;
        int maxi = INT_MIN;
        for(auto i:s){
            hash[i-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i] > maxi){
                maxi = hash[i];
                maxc = i+'a';
            }
        }
        int index=0;
        while(maxi>0 && index<s.size()){
            s[index] = maxc;
            maxi--;
            index += 2;
        }

        if(maxi != 0){
            return "";
        }

        hash[maxc - 'a'] = 0;
        for(int i=0;i<26;i++){
            while(hash[i] > 0){
                index = (index >= s.size())?1:index;
                s[index] = i+'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;
    }
};