#define ll long long
class Solution {
public:
    int mod = 1e9 + 7;
    ll sum = 0;
    ll mini = 1e8;

    ll solve(vector<int> &nums,ll cost1,ll cost2,ll maxi){
        int n = nums.size();
        ll total = maxi*n - sum;

        // Case 1 agar cost1 ka double bhi cost2 se kam h mtlb cost1 profitable h.
        if(2*cost1 <= cost2) return total*cost1;

        //Ek Edge case h {8 1 7}.
        ll max_diff = maxi - mini;
        ll separate_increment = total - max_diff;
        if(separate_increment <= max_diff){
            return separate_increment * cost2 + (max_diff - separate_increment) * cost1;
        }


        // Case 2 agar cost1 profitable ni h mtlb cost2 se ans nikalo.
        // ab aati h baat pair ki kyuki hame 2 index pick krke +1 krna h
        // basically check even odd.
        if((total&1) == 0) {
            return (total/2) * cost2;
        }
        else{
            return (total/2) * cost2 + cost1; // 9 h total toh 4 pair aur 1 single element ( sad );
        }

    }
    int minCostToEqualizeArray(vector<int>& nums, int cost1, int cost2) {
        ll maxi = *max_element(nums.begin(),nums.end());
        mini = *min_element(nums.begin(),nums.end());
        sum = accumulate(nums.begin(),nums.end(),0LL);

        ll res = 1e18;

        for(int i = maxi ; i <= 2*maxi ; i++){
            ll ans = solve(nums,cost1,cost2,i);
            res = min(res,ans);
        }
        return res % mod;
    }
};