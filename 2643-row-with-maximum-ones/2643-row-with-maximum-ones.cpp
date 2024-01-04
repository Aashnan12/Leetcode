class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int ones = INT_MIN;
        int row = 0;
        int size = mat.size();
        
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j] == 1)
                {
                    count++;
                }
            }
            if(count > ones)
            {
                ones = count;
                row = i;
            }
        }
        ans.push_back(row);
        ans.push_back(ones);
        return ans;
    }
};