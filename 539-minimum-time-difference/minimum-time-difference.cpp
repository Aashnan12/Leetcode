class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        int x;
        for(auto i : timePoints){
            x = (stoi(i.substr(0,2))*60 + stoi(i.substr(3,2)));
            if(x == 0){
                x = 1440;
            }
            time.push_back(x);
        }
        // for(auto i : time){
        //     cout<<i<<" ";
        // }
        sort(time.begin(),time.end());
        // cout<<endl;
        // for(auto i : time){
        //     cout<<i<<" ";
        // }
        int mini = INT_MAX;
        for(int i=1;i<time.size();i++){
            mini = std::min(mini,time[i] - time[i-1]);
        }
        mini = std::min(mini,1440-(time[time.size()-1] - time[0]));
        return mini;
    }
};