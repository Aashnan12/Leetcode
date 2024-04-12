class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),maxi = INT_MIN;
        vector<int> LeftMax(n);
        vector<int> RightMax(n);
        for(int i=0;i<n;i++){
            LeftMax[i] = max(maxi,height[i]);
            maxi = max(maxi,height[i]);
        }
        maxi = INT_MIN;
        for(int i=n-1;i>=0;i--){
            RightMax[i] = max(maxi,height[i]);
            maxi = max(maxi,height[i]);
        }
        int maxwater = 0;
        for(int i=0;i<n;i++){
            maxwater += min(LeftMax[i],RightMax[i]) - height[i];
        }
        return maxwater;
    }
};