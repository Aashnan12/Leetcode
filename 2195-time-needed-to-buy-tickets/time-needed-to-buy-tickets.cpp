class Solution {
public:
    int timeRequiredToBuy(vector<int>& A, int k) {
        int time = 0;
        while (true) {
            for (int i = 0; i < A.size(); ++i) {
                if (A[i] == 0) continue;
                A[i]--;
                ++time;
                if (A[k] == 0) return time;
            }
        }
    }
};