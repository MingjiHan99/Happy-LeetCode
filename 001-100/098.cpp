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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        travel(root);
        for(int i = 0; i < value.size() - 1; i++){
            if(value[i] >= value[i+1]){
                return false;
            }
        }
        
        return true;
    }
    
    void travel(TreeNode* root){
        if(root->left != nullptr){
            travel(root->left);
        }
        
        value.push_back(root->val);
        
        if(root->right != nullptr){
            travel(root->right);            
        }
                
    }
    
private:
    vector<int> value;
};