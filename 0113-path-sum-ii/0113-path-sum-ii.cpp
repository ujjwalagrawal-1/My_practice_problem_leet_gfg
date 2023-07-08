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
void solve(TreeNode* &root, int& targetSum,int& CurrSum,vector<int>& part,vector<vector<int>>& answer){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        part.push_back(root->val);
        CurrSum += root->val;
        if(CurrSum == targetSum){
            //yes it is a valid answer
            answer.push_back(part);
        }
        part.pop_back();
        CurrSum -= root->val;
    }

    CurrSum += root->val;
    part.push_back(root->val);
    solve(root->left,targetSum,CurrSum,part,answer);
    solve(root->right,targetSum,CurrSum,part,answer);
    
    part.pop_back();
    CurrSum -= root->val;
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int CurrSum = 0;
        vector<vector<int>>answer;
        vector<int>part;
        solve(root,targetSum,CurrSum,part,answer);
         return answer;
    }
};