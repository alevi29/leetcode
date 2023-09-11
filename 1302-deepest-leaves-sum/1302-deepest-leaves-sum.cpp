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
    int depth = 0, ret = 0;
    
    int trav(TreeNode* root) {
        if (root == nullptr) return 0;
        
        return max(trav(root->left) + 1, trav(root->right) + 1);
    }
    
    void getSum(TreeNode* root, int curDepth) {
        if (root == nullptr) return;
        
        if (curDepth == depth) ret += root->val;
        getSum(root->left, curDepth + 1);
        getSum(root->right, curDepth + 1);
    }
    
    int deepestLeavesSum(TreeNode* root) { 
        depth = trav(root);
        getSum(root, 1);
        
        return ret;
    }
};