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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL) {
            if(q != NULL) {
                return false;
            }
            return true;
        }
        if(q == NULL) {
            if(p != NULL) {
                return false;
            }
            return true;
        }
        if(q->val != p->val) {
            return false;
        }
        if(isSameTree(q->left,p->left)) {
            if(isSameTree(q->right,p->right)) {
                return true;
            }
                return false;     
        }
        return false;
    }
};
