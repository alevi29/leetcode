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
    priority_queue <int, vector <int>, greater <int>> pq;
    void trav(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        pq.push(root->val);
        trav(root->left);
        trav(root->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        trav(root);
        for (int i = 0; i < k - 1; ++i) {
            pq.pop();
        }
        return pq.top();
    }
};