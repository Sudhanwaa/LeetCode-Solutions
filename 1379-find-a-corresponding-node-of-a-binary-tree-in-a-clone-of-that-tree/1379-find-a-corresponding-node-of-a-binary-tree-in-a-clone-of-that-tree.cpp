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
    TreeNode* search(TreeNode* original, TreeNode* cloned, int val){
        if(original){
            if(original->val == val) return cloned;
            TreeNode* left = search(original->left, cloned->left, val);
            TreeNode* right = search(original->right, cloned->right, val);
            if(left == NULL) return right;
            return left;
        }
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return search(original, cloned, target->val);
    }
};