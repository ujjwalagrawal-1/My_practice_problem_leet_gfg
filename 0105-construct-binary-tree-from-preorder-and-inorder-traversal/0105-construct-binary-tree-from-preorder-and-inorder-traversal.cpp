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
int position(vector<int>& Inorder,int size,int element){
  for(int i = 0;i<size;i++){
    if(Inorder[i] == element){
      return i;
    }
  }
  return -1;
}
TreeNode* Buiding_tree_pre_and_In(vector<int> Preorder,vector<int> Inorder,int Infirst,int Inlast,int &prefirst,int size){
  if(Infirst>Inlast || prefirst >= size){
    return NULL;
  }
  int element = Preorder[prefirst++];
  TreeNode* root = new TreeNode(element);
  int pos = position(Inorder,size,element);
  root->left = Buiding_tree_pre_and_In(Preorder,Inorder,Infirst,pos-1,prefirst,size);
  root->right = Buiding_tree_pre_and_In(Preorder,Inorder,pos+1,Inlast,prefirst,size);
  return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
  int Infirst = 0;
  int prefirst = 0;
  int size = preorder.size();
  int Inlast = size-1;
  TreeNode* root = Buiding_tree_pre_and_In(preorder,inorder,Infirst,Inlast,prefirst,size);
  return root;
    }
};