class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> loser_map;

        for(int i=0;i<matches.size();i++){
            loser_map[matches[i][1]]++;
        }

        vector<int> winner;
        vector<int> loser;

        for(int i=0;i<matches.size();i++) {
            int win = matches[i][0];
            int lose = matches[i][1];

            if(loser_map.find(win) == loser_map.end()){
                winner.push_back(win);
                loser_map[win] = -1;
            }

            // Checking if player was lost only once.
            if(loser_map[lose] == 1){
                loser.push_back(lose);
            }
        }
        sort(winner.begin(),winner.end());
        sort(loser.begin(),loser.end());
        return {winner,loser};
    }
};