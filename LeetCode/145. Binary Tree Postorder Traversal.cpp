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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        return postOrderTree(root,arr);
    }

    vector<int> postOrderTree(TreeNode* root , vector<int> arr){

            if(root == NULL){
                return arr;
            }

            arr = postOrderTree(root->left, arr);
            arr = postOrderTree(root->right,arr);

            arr.push_back(root->val);

         return arr;
        }
};
