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
    unordered_map<int,int> mp;
    TreeNode* solve(vector<int> &in,vector<int> &post,int &index,int instart,int inend,int n){
        // Checking the bound if we traversed from n-1 to 0 or when inorder array is finished means start index crossed end index.
        if(index < 0 || instart > inend) return NULL;

        // Extracting element from last of postorder array and then find its position in inorder array.
        int element = post[index--];
        TreeNode* root = new TreeNode(element);
        int pos = mp[element];

        // Recursive calls for both left subtree and right subtree
        root->right = solve(in,post,index,pos+1,inend,n); // Catch
        root->left = solve(in,post,index,instart,pos-1,n);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        for(int i=0;i<n;i++){
            mp[inorder[i]] = i; 
        }
        int index = n-1;
        TreeNode* ans = solve(inorder,postorder,index,0,n-1,n);
        return ans;    
    }
};