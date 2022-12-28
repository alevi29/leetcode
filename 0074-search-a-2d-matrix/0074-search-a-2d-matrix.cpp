class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 1) {
            for (int i = 0; i < matrix[0].size(); i++) {
                if (matrix[0][i] == target) {
                    return true;
                }
            }
            return false;
        }
        if (matrix[0].size() == 1) {
            for (int i = 0; i < matrix.size(); i++) {
                if (matrix[i][0] == target) {
                    return true;
                }
            }
            return false;            
        }
        for (int i = 1; i < matrix.size(); i++) {
            if (matrix[i][0] >= target && matrix[i-1][0] <= target) {
                if (matrix[i][0] == target) {
                    return true;
                }
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i-1][j] == target) {
                        return true;
                    }
                }
                return false;
            }
            if (i == matrix.size() - 1 && matrix[i][0] <= target) {
                if (matrix[i][0] == target) {
                    return true;
                }
                for (int j = 0; j < matrix[0].size(); j++) {
                    if (matrix[i][j] == target) {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};