class Solution {
public:
    
    bool solve(vector<int> &piles,int mid,int h){
        int hour=0;
        for(auto &i : piles){
            hour = hour+i/mid;
            if(i%mid) hour++;
        }
        return hour<=h;
    }     
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=1000000001;
        while(s<e){
            int mid=(s+e)/2;
            if(solve(piles,mid,h)){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return e;
    }
};