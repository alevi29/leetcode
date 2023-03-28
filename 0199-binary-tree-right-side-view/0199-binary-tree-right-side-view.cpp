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
    vector <int> ret;
    void trav(TreeNode* root, int depth) {
        if (root == nullptr) return;
        if (depth == ret.size()) ret.push_back(root->val);
        trav(root->right, depth + 1);
        trav(root->left, depth + 1);
            
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        trav(root, 0);
        return ret;
    }
};