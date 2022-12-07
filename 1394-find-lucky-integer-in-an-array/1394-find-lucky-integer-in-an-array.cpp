class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int, int> map;
        int n = arr.size(), max = -1;
        for (int i = 0; i < n; ++i) {
            map[arr[i]]++;
        }
        for (auto i : map) {
            if (i.first == i.second) {
                if (i.first > max) {
                    max = i.first;
                }
            }
        }
        return max;
    }
};