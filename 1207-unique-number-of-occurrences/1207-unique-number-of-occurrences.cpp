class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> map;
        unordered_map <int, int> map2;
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            map[arr[i]]++;
        }
        for (auto i : map) {
            map2[i.second]++;
            if (map2[i.second] > 1) {
                return false;
            }
        }
        return true;
    }
};