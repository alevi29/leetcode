class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret = 0;
        for (int i = 0; i < mat.size(); ++i) {
            ret += mat[i][i];
            if (i != mat.size() - i - 1) ret += mat[mat.size() - i - 1][i];
        }
        return ret;
    }
};