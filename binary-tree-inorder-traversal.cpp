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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> inOrderVector = {};
        if(root == NULL) {
            return inOrderVector;
        }
        if(root->left != NULL) {
            inOrderVector = inorderTraversal(root->left);
        }
        inOrderVector.push_back(root->val);
        if(root->right != NULL) {      
            vector<int> inOrderVector2 = inorderTraversal(root->right);
            inOrderVector.insert(inOrderVector.end(), inOrderVector2.begin(),inOrderVector2.end()); 
        }  
        return inOrderVector;
    }
};
