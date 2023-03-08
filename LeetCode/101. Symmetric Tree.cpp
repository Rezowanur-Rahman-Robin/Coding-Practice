
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
    bool myTree(TreeNode* leftRoot , TreeNode* rightRoot){
        if(leftRoot ==NULL && rightRoot ==NULL){
            return true;
        }
        if(leftRoot ==NULL || rightRoot ==NULL){
            return false;
        }
        if(leftRoot->val != rightRoot->val){
            return false;
        }
        return myTree(leftRoot->left,rightRoot->right) && myTree(leftRoot->right , rightRoot->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root){
            return myTree(root->left,root->right);
        }
        return true;
    }
};
