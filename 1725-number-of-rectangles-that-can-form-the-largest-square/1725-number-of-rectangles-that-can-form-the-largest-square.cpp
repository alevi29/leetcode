class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max = 0;
        unordered_map <int, int> map;
        for (auto i : rectangles) {
            int cur = min(i[0], i[1]);
            if (cur > max) {
                max = cur;
            }
            map[cur]++;
        }
        return map[max];
    }
};