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
    vector <TreeNode*> ret;
    /*
    void deleteN(TreeNode* &root) {
        if (root == nullptr) {
            return;
        }
        if (map[root->val] != 0) {
            root = nullptr;
            return;
        }
        deleteN(root->left);
        deleteN(root->right);
    };
    */
    void trav(TreeNode* &root) {
        if (root == nullptr) {
            return;
        }
        
        trav(root->left);
        trav(root->right);
        
        if (map[root->val] != 0) {
            if (root->left != nullptr && map[root->left->val] == 0) {
                ret.push_back(root->left);
            }
            if (root->right != nullptr && map[root->right->val] == 0) {
                ret.push_back(root->right);
            }
            root = nullptr;
        }

    };
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for (int i = 0; i < to_delete.size(); ++i) {
            map[to_delete[i]]++;
        }
        trav(root);
        //deleteN(root);
        if (root != nullptr) {
            ret.push_back(root);
        }
        return ret;
    }
};