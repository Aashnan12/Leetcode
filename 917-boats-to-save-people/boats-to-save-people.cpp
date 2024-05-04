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