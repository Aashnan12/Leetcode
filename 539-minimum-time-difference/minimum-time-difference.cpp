class Solution {
public:
    int findMinDifference(vector<string>& arr) {
        vector<int> time;
        for(auto i : arr){
            int hour = stoi(i.substr(0,2));
            int min = stoi(i.substr(3,2));
            if(hour == 0){
                time.push_back(1440 + min);
            }
            else{
                time.push_back(hour*60 + min);
            }
        }
        sort(time.begin(),time.end());
        int mini = INT_MAX;
        for(int i=1;i<time.size();i++){
            mini = min(mini,time[i] - time[i-1]);
        }
        mini = min(mini,1440 - (time[time.size()-1] - time[0]));
        return mini;
    }
};