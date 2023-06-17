

class Solution {    

public:
    int search(int i, int j, vector<vector<int>>& theGrid, int prev) {
        if (i < 0 || i == theGrid.size() || j >= theGrid[0].size() || theGrid[i][j] <= prev) return 0;
        prev = theGrid[i][j];
        theGrid[i][j] = INT_MAX;
        int ret = search(i - 1, j + 1, theGrid, prev);
        ret = max(ret, search(i, j + 1, theGrid, prev));
        ret = max(ret, search(i + 1, j + 1, theGrid, prev));
        return ret + 1;
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        int ret = 0;
        for (int i = 0; i < grid.size(); ++i) {
            ret = max(ret, search(i, 0, grid, 0));
        }
        return ret - 1;
    }
};