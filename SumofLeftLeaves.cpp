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
    int sumOfLeftLeaves(TreeNode* root) {
        return traverseTree(root,false);
    }
    int traverseTree(TreeNode* root, bool wasLeft) {
        if(root == nullptr) {
            return 0;
        }
        if(wasLeft && root->left == nullptr && root->right == nullptr) {
            return root->val;
        }
        int a = traverseTree(root->left, true);
        int b = traverseTree(root->right, false);
        return a + b;
    }
};
