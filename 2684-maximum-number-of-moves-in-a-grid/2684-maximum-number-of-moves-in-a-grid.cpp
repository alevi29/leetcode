

class Solution {    

public:
    int search(int i, int j, vector<vector<int>>& theGrid, int prev) {
        if (i < 0 || i == theGrid.size() || j >= theGrid[0].size() || theGrid[i][j] <= prev) return 0;
        prev = theGrid[i][j];
        theGrid[i][j] = INT_MAX;
        return max({search(i - 1, j + 1, theGrid, prev), search(i, j + 1, theGrid, prev), search(i + 1, j + 1, theGrid, prev)}) + 1;
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        int ret = 0;
        for (int i = 0; i < grid.size(); ++i) {
            ret = max(ret, search(i, 0, grid, 0));
        }
        return ret - 1;
    }
};