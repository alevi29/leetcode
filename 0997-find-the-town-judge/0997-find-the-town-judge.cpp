class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1 && trust.empty()) return n;
        int ret = -1;
        unordered_map <int, int> map, map2;
        for (auto i : trust) {
            map[i[1]]++;
            map2[i[0]]++;
        }
        int possible = 0;
        for (auto i : map) {
            if (i.second == n - 1 && map2.find(i.first) == map.end()) {
                if (ret != -1) {
                    return -1;
                }
                ret = i.first;
            } 
        }
        return ret;
    }
};