class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch) != string::npos){
            reverse(word.begin(),word.begin()+word.find(ch)+1);
        }
        return word;
    }
};