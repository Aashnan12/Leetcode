class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;
        for(auto i : prices){
            buy = min(buy,i);
            profit = max(profit,i-buy);
        }
        return profit;
    }
};