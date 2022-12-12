class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ret = 0;
        for (int i = 0; i < grid.size(); ++i) {
            sort(grid[i].begin(), grid[i].end());
        }
        for (int i = grid[0].size() - 1; i >= 0; --i) {
            int max = grid[0][i];
            for (int j = 0; j < grid.size(); ++j) {
                if (grid[j][i] > max) {
                    max = grid[j][i];
                }
            }
            ret += max;
        }
        return ret;
    }
};