class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = INT_MIN;
        int i=0;
        int j=height.size()-1;

        int area = 0;

        while(i<j){
            area = (j-i) * min(height[j],height[i]);
            maxarea = max(maxarea,area);
            if(height[i] < height[j])i++;
            else j--;
        }
        return maxarea;
    }
};