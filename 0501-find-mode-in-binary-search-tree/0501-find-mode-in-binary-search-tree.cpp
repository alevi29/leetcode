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
    unordered_map <int, int> map;
    int hi_count = 0;
public:
    void trav(TreeNode* root) {
        if (root == nullptr) return;
        map[root->val]++;
        if (map[root->val] > hi_count) hi_count = map[root->val];
        trav(root->left);
        trav(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        trav(root);
        vector <int> ret;
        for (auto i : map) {
            if (i.second == hi_count) ret.push_back(i.first);
        }
        return ret;
    }
};