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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        stack<bool> vis;

        vector<int> res;
        if(root == NULL) return res;

        s.push(root);
        vis.push(false);

        while(!s.empty()){
            TreeNode* node = s.top();
            s.pop();
            bool flag = vis.top();
            vis.pop();

            if(flag == false){
                if(node->right) {
                    s.push(node->right);
                    vis.push(false);
                }
                s.push(node);
                vis.push(true);

                if(node->left){
                    s.push(node->left);
                    vis.push(false);
                }
            }
            else{
                res.push_back(node->val);
            }
        }
        return res;
    }
};