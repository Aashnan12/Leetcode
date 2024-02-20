class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        long long int s = 0;
        long long int e = letters.size()-1;
        long long int ans = 0;
        while(s<=e){
            long long int mid = s + (e-s)/2;
            if(letters[mid] <= target){
                s = mid+1;
            }
            else {
                ans = mid;
                e = mid-1;
            }
        }
        return letters[ans];
    }
};