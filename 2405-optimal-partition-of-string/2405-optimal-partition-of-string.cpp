class Solution {
public:
    int partitionString(string s) {
        int ret = 1;
        unordered_map <char, int> map;
        for (auto i : s) {
            map[i]++;
            if (map[i] > 1) {
                ret++;
                map.clear();
                map[i] = 1;
            }
        }
        return ret;
    }
};