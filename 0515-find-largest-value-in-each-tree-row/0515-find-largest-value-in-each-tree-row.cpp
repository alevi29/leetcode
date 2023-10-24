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
    int vals[1000];
    int maxDepth = 0;
public:
    void populate(int depth, TreeNode* root) {
        if (depth > maxDepth) maxDepth = depth;
        if (root == nullptr) return;
        if (root->val > vals[depth]) vals[depth] = root->val;
        
        populate(depth + 1, root->left);
        populate(depth + 1, root->right);
    }
    
    vector<int> largestValues(TreeNode* root) {
        for (int i = 0; i < 1000; ++i) vals[i] = INT_MIN;
        vector <int> ret;
        populate(0, root);
        for (int i = 0; i < maxDepth; ++i) {
            ret.push_back(vals[i]);
        }
        return ret;
    }
};