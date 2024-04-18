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
    void solve(TreeNode *root,string &ans,string currans){
        if(!root) return;
        if(!root->left && !root->right){
            currans.push_back('a' + root->val);
            reverse(currans.begin(), currans.end());
            if(ans.empty() || ans > currans){
                ans = currans;
            }
            return;
        }
        currans.push_back('a' + root->val);
        solve(root->left,ans,currans);
        solve(root->right,ans,currans);
        return;
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans = "";
        solve(root,ans,"");
        return ans;
    }
};