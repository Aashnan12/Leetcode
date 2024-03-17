class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        // Step 1 -> Push intervals before new interval to result array

        vector<vector<int>> result;
        int i=0;
        while(i<intervals.size() && intervals[i][1] < newInterval[0]){
            result.push_back(intervals[i]);
            i++;
        }

        // Step 2 -> Add the overlapping Interval

        while(i<intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }

        result.push_back(newInterval);

        // Step 3 -> Add rest of intervals greater than uper bound of newintervals.

        while(i<intervals.size()){
            result.push_back(intervals[i]);
            i++;
        }
        
        return result;
    }
};