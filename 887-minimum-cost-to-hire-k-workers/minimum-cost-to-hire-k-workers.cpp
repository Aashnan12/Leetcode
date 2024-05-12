class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double,int>> worker_ratio(n);
        for(int i=0;i<n;i++){
            worker_ratio[i] = make_pair( (double)wage[i] / (double)quality[i] , quality[i] );
        }
        sort(worker_ratio.begin(),worker_ratio.end());
        priority_queue<int> pq;
        int sum = 0;
        for(int i=0;i<k;i++){
            pq.push(worker_ratio[i].second); // pushing k qualities
            sum += worker_ratio[i].second;
        }
        double manager_ratio = worker_ratio[k-1].first;
        double result = manager_ratio * sum;

        for(int i=k;i<n;i++){
            manager_ratio = worker_ratio[i].first;
            pq.push(worker_ratio[i].second);
            sum += worker_ratio[i].second;
            if(pq.size() > k){
                sum -= pq.top();
                pq.pop();
            }
            result = min(result,sum * manager_ratio);
        }
        return result;
    }
};