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
        vals.push_back(root->val);
        trav(root->left);
        trav(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        int ret = INT_MAX;
        trav(root);
        sort(vals.begin(), vals.end());
        for (int i = 1; i < vals.size(); ++i) {
            if (vals[i] - vals[i - 1] < ret) {
                ret = vals[i] - vals[i - 1];
            }
        }
        return ret;
    }
};