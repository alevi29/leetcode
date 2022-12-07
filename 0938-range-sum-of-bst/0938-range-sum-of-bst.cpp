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
    int ret = 0;

    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return ret;
        }
        if (root->val >= low && root->val <= high) {
            ret += root->val;
        }
        rangeSumBST(root->left, low, high);
        rangeSumBST(root->right, low, high);
        return ret;
    }
};