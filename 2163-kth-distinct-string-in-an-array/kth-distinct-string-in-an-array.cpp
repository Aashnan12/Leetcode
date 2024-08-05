class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string,int> mp;

        vector<int> freq(n,0);

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for(int i=0;i<n;i++){
            freq[i] = mp[arr[i]];
        }

        string ans = "";
        for(int i=0;i<n;i++){
            if(k > 0 && freq[i] == 1){
                k--;
            }
            if(k == 0){
                ans = arr[i];
                break;
            }

        }
        return ans;

    }
};