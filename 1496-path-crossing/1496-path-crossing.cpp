class Solution {
public:
    bool isPathCrossing(string path) {
        vector <int> cur = {0, 0};
        set <vector <int>> set;
        set.insert(cur);
        for (auto i : path) {
            switch (i) {
                case 'N':
                    cur[1]++;
                    break;
                case 'S':
                    cur[1]--;
                    break;
                case 'E':
                    cur[0]++;
                    break;
                case 'W':
                    cur[0]--;
                    break;
            }
            if (set.find(cur) != set.end()) return true;
            set.insert(cur);
        }
        return false;
    }
};