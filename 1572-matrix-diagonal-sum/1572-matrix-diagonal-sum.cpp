class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int p = 0, s = mat.size() - 1, ret = 0;
        for (int i = 0; i < mat.size(); ++i) {
            ret += mat[p][i];
            if (p != s) ret += mat[s][i];
            ++p, --s;
        }
        return ret;
    }
};