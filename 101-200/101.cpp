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
    bool isSymmetric(TreeNode* root) {
         if(!root) return true;
         return compare(root->left,root->right);
    }
    
    bool compare(TreeNode* left,TreeNode* right){
         if(left == nullptr && right == nullptr){
             return true;
         }
         else if ( left != nullptr && right == nullptr || left == nullptr && right != nullptr ){
             return false;
         }
         if(left->val != right->val){
             return false;
         }
         return compare(left->right,right->left) && compare(left->left,right->right);
        
    }
    
    
};