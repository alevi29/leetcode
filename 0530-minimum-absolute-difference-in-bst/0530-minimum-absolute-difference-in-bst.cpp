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
    vector <int> vals;
    void trav(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        trav(root->left);
        vals.push_back(root->val);
        trav(root->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        trav(root);
        int ret = INT_MAX;
        for (int i = 1; i < vals.size(); ++i) {
            if (vals[i] - vals[i - 1] < ret) {
                ret = vals[i] - vals[i - 1];
            }
        }
        return ret;
    }
};