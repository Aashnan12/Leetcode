/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});

        long long maxi = 0;

        while(!q.empty()){
            long long left = q.front().second;
            long long right = q.back().second;
            maxi = max(maxi,right - left + 1);

            int n = q.size();

            while(n--){
                TreeNode* temp = q.front().first;
                unsigned long long idx = q.front().second;
                q.pop();

                if(temp->left){
                    q.push({temp->left,2*idx+1});
                }
                if(temp->right){
                    q.push({temp->right,2*idx+2});
                }
            }
        }
        return maxi;
    }
};