/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool existsintree(TreeNode* root, TreeNode* target){
    if(root==NULL) return false;
    if(root==target) return true;
    return existsintree(root->left,target) || existsintree(root->right,target);
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        else if(existsintree(root->left,p) && existsintree(root->right,q)) return root;
       else if(!existsintree(root->left,p) && !existsintree(root->right,q)) return root;
       else if(existsintree(root->left,p) && !existsintree(root->right,q)) return lowestCommonAncestor(root->left,p,q);
       else return lowestCommonAncestor(root->right,p,q);
    }

};