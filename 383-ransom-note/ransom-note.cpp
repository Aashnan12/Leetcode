class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);
        for(int i : magazine){
            freq[i-'a']++;
        }
        for(int i: ransomNote){
            freq[i-'a']--;
            if(freq[i-'a'] < 0) return false;
        }
        return true;
    }
};