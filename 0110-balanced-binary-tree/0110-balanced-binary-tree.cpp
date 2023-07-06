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
int MaxDepth(TreeNode* root){
    if(!root){
        return 0;
    }

    int a = MaxDepth(root->left);
    int b = MaxDepth(root->right);
    int ans = max(a,b)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        // Base case 
        if(root == 0){
            return true; 
        }
        //  processing
        int set1 = MaxDepth(root->left);
        int set2 = MaxDepth(root->right);
        int diff = abs(set1 - set2); 

        bool ans = (diff<=1);
        bool leftkaanswer = isBalanced(root->left);
        bool rightkaanswer = isBalanced(root->right);

        if(leftkaanswer && ans && rightkaanswer){
            return true;
        }
        else 
        return false;
    }
};