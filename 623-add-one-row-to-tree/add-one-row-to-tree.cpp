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
    TreeNode* solve(TreeNode* root, int val, int depth,int currdepth){
        if(!root) return NULL;
        if(currdepth + 1 == depth){
            TreeNode* leftchild = root->left;
            TreeNode* rightchild = root->right;

            root->left = new TreeNode(val);
            root->left->left = leftchild;
            root->left->right = NULL;

            root->right = new TreeNode(val);
            root->right->left = NULL;
            root->right->right = rightchild;
        }

        root->left = solve(root->left,val,depth,currdepth+1);
        root->right = solve(root->right,val,depth,currdepth+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            node->right = NULL;
            return node;
        }
        return solve(root,val,depth,1);
    }
};