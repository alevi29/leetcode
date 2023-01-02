class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector <vector <int>> board(8);
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[i].push_back(0);
            }
        }
        for (auto i : queens) {
            board[i[0]][i[1]] = 1;
        }
        vector <vector <int>> ret;
        int x = king[0], y = king[1];
        bool found = false;
        while (x >= 0 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x--;
        }
        found = false;
        x = king[0];
        while (x < 8 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x++;
        }      
        found = false;
        x = king[0];
        while (y >= 0 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            y--;
        }
        y = king[1];
        found = false;
        while (y < 8 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            y++;
        }        
        found = false;
        x = king[0], y = king[1];
        while (x >= 0 && y >= 0 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x--;
            y--;
        }
        found = false;
        x = king[0], y = king[1];
        while (x < 8 && y < 8 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x++;
            y++;
        }   
        found = false;
        x = king[0], y = king[1];
        while (x < 8 && y >= 0 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x++;
            y--;
        }
        found = false;
        x = king[0], y = king[1];
        while (x >= 0 && y < 8 && found == false) {
            if (board[x][y] == 1) {
                ret.push_back({x, y});
                found = true;
            }
            x--;
            y++;
        }
        return ret;
    }
};