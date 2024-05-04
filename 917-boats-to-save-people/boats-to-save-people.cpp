#pragma GCC optimize("Ofast")
const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int l=0,r=people.size()-1;
        int count = 0;
        while(l<=r){
            int sum = people[l] + people[r];
            if(sum <= limit){
                l++;
                r--;
            }
            else if(sum > limit){
                r--;
            }
            else{
                l++;
            }
            count++;
        }
        return count;
    }
};