
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        return preOrderTree(root,arr);
    }

     vector<int> preOrderTree(TreeNode* root , vector<int> arr){

            if(root == NULL){
                return arr;
            }


            arr.push_back(root->val);
            arr = preOrderTree(root->left, arr);
            arr = preOrderTree(root->right,arr);

         return arr;
        }
};
