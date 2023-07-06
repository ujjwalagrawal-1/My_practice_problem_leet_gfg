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
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int rootkeleft = maxDepth(root->left);
        int rootkeright = maxDepth(root->right);
        int ans = max(rootkeleft,rootkeright) + 1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int lefti = diameterOfBinaryTree(root->left);
        int righti = diameterOfBinaryTree(root->right);
        int comb = maxDepth(root->left) + maxDepth(root->right);
        int ans = max(lefti,max(righti,comb));
        return ans;
    }
};