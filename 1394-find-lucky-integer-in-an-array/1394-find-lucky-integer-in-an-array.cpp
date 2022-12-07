class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int, int> map;
        int n = arr.size(), cur = -1, max = -1;
        for (int i = 0; i < n; ++i) {
            map[arr[i]]++;
        }
        for (auto i : map) {
            if (i.first == i.second) {
                cur = i.first;
                if (cur > max) {
                    max = cur;
                }
            }
        }
        return max;
    }
};