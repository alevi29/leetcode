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
    vector <int> vec;
public:
    void trav(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        vec.push_back(root->val);
        trav(root->left);
        trav(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        trav(root);
        return vec;
    }
};