class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& A) {
        sort(A.begin(),A.end());
        int n = A.size();
        vector<int> result(n);
        queue<int> q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        for(int i=0;i<n;i++){
            int idx = q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            result[idx] = A[i];
        }
        return result;
    }
};