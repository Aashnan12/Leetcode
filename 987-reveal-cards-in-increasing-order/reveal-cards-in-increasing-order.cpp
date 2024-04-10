class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& A) {
        sort(A.begin(),A.end());
        int n = A.size();
        vector<int> result(n);
        deque<int> q;
        for(int i=0;i<n;i++){
            q.push_back(i);
        }
        for(int &card : A){
            int idx = q.front();
            q.pop_front();
            result[idx] = card;
            if(!q.empty()){
                q.push_back(q.front());
                q.pop_front();
            }
        }
        return result;
    }
};