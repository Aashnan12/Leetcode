class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        int hour;
        int min;
        for(auto i : timePoints){
            hour = stoi(i.substr(0,2));
            min = stoi(i.substr(3,2));
            if(hour == 0){
                time.push_back(1440 + min);
            }
            else {
                time.push_back(hour*60+min);
            }
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