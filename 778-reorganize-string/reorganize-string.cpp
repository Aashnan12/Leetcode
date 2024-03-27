class Solution {
public:
    string reorganizeString(string s) {
        //agar mai sabse jyada freq vala char place kr paya toh string mai baat h
        int maxi = INT_MIN;
        char ch;
        int hash[26] = {0};
        for(auto i : s){
            hash[i-'a']++;
            if(hash[i-'a'] > maxi){
                maxi = hash[i-'a'];
                ch = i;
            }
        }
        int i = 0;
        while(maxi > 0 && i < s.size()){
            s[i] = ch;
            maxi--;
            i += 2;
        }
        //Agar place nahi kr paya toh string bina adjacant same hue banegi hi nahi.
        if(maxi != 0){
            return "";
        }
        //Agar yaha pahuch gya mtlb max character place kr diya.
        hash[ch - 'a'] = 0;
    
        for(int j=0;j<26;j++){
            while(hash[j] > 0){
                i = (i>=s.size())?1:i;
                s[i] = j+'a';
                hash[j]--;
                i += 2;
            }
        }
        return s;
    }
};