class Solution {
    void rotate(vector <vector<int>> &mat) {
        int i, j;
        for (i = 0; i < mat.size(); ++i) {
            for (j = i; j < mat.size(); ++j) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        for (i = 0; i < mat.size(); ++i) {
            for (j = 0; j < mat.size() / 2; ++j) {
                swap(mat[i][j], mat[i][mat.size() - j - 1]);
            }
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; ++i) {
            rotate(mat);
            if (mat == target) return true;
        }
        return false;
    }
};