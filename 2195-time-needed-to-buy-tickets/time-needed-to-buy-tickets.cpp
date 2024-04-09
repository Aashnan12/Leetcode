class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        int time = 0;
        while (true) {
            for (int i = 0; i < arr.size(); ++i) {
                if (arr[i] == 0) continue;
                arr[i]--;
                ++time;
                if (arr[k] == 0) return time;
            }
        }
    }
};