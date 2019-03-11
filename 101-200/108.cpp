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
    vector<int> arr;
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0){
             return nullptr;
        }
        arr = nums;
        return build(0,nums.size() - 1);
       
    }
    TreeNode* build(int l,int r){
        if(l > r){
            return nullptr;
        }
        int mid = (l + r) / 2;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = build(l,mid - 1);
        node->right = build(mid + 1,r);
        return node;
    }
};