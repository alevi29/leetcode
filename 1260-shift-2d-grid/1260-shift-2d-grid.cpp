class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector <int> temp;
        for (auto i : grid) {
            for (auto j : i) {
                temp.push_back(j);
            }
        }
        int n = temp.size();
        int index = ((n - k) % n + n) % n;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                grid[i][j] = temp[index];
                index = (index + 1) % temp.size();
            }
        }
        return grid;
    }
};