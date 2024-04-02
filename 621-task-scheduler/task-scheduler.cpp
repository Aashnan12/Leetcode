class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // unordered_map<char,int>mp;
        // int count = 0;
        // for(auto e : tasks)
        // {
        //     mp[e]++;
        //     count = max(count, mp[e]);
        // }
        
        // int ans = (count-1)*(n+1);
        // for(auto e : mp) if(e.second == count) ans++;
        // return max((int)tasks.size(), ans);

        vector<int> mp(26,0);
        for(char &ch : tasks){
            mp[ch-'A']++;
        }
        sort(mp.begin(),mp.end());
        int maxfreq = mp[25];
        int gaddhe = maxfreq - 1;
        int idleslots = n*gaddhe;

        for(int i=24;i>=0;i--){
            idleslots -= min(mp[i],gaddhe);
        }
        if(idleslots > 0){
            return tasks.size() + idleslots;
        }
        return tasks.size();
    }
};