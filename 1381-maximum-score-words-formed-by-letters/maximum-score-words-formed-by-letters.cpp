class Solution {
public:
    void solve(int i,vector<string>& words, vector<int>& freq, vector<int>& score,int currscore,int n,int &maxscore){
        maxscore = max(maxscore,currscore);
        if(i >= n){
            return;
        }

        int j=0;
        int tempscore = 0;
        vector<int> temp = freq;

        while(j<words[i].size()){
            char ch = words[i][j];
            temp[ch - 'a']--;
            tempscore += score[ch-'a'];
            if(temp[ch-'a'] < 0){
                break;
            }
            j++;
        }

        //Take
        if(j == words[i].size()){
            solve(i+1,words,temp,score,tempscore + currscore,n,maxscore);
        }

        // Not take
        solve(i+1,words,freq,score,currscore,n,maxscore);
        return;
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26,0);

        for(int i=0;i<letters.size();i++){
            freq[letters[i] - 'a']++;
        }
        int maxscore = 0;
        solve(0,words,freq,score,0,words.size(),maxscore);
        return maxscore;
    }
};