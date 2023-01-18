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
    int value;
    void trav(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        if (root->val != value) value = -1;
        trav(root->left);
        trav(root->right);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        value = root->val;
        trav(root);
        return value == -1 ? false : true;
    }
};