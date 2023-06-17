class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c, int prev){
        if(r < 0 || r == grid.size() || c == grid[0].size() || prev >= grid[r][c] ) return 0;
        prev = grid[r][c];
        grid[r][c] = INT_MAX;
        int res = dfs(grid, r-1, c+1, prev);
        res = max(res, dfs(grid, r, c+1, prev ));
        res = max(res, dfs(grid, r+1, c+1, prev));
        return res + 1;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); ++i) ans = max(ans, dfs(grid, i, 0, 0));
        return ans-1;
    }
};