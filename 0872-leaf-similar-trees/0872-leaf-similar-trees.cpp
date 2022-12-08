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
    vector <int> one;
    vector <int> two;
    
    void populate(TreeNode* root, vector <int> &vec) {
        if (root == nullptr) {
            return;
        }
        populate(root->left, vec);
        if (root->left == nullptr && root->right == nullptr) {
            vec.push_back(root->val);
        }
        populate(root->right, vec);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        populate(root1, one);
        populate(root2, two);
        if (one.size() != two.size()) {
            return false;
        }
        for (int i = 0; i < one.size(); i++) {
            if (one[i] != two[i]) {
                return false;
            }
        }
        return true;
    }
};