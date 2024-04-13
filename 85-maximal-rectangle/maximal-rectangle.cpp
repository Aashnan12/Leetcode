class Solution {
public:
    int FindMaxArea(const vector<int>& height){
        // find next smallest left and right and subtract it.
        int maxi = 0;
        stack<int> stack;

        for(int i=0;i<=height.size();i++){
            while(!stack.empty() && (i==height.size() || height[stack.top()] > height[i])) {
                const int m = height[stack.top()];
                stack.pop();
                const int v = stack.empty() ? i : i-stack.top()-1;
                maxi = max(maxi,m * v);
            }
            stack.push(i);
        }
        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty())
            return 0;

        int m = matrix.size(),n=matrix[0].size(),maxi=0;

        vector<int> height(n+1,0);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                height[j] = (matrix[i][j] == '0') ? 0 : height[j]+1;
            }
            maxi = max(maxi,FindMaxArea(height));
        }
        return maxi;
    }
};