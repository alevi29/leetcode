class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map <int, int> map;
        for (auto i : arr) {
            if ((i % 2 == 0 && map.find(i / 2) != map.end()) || map.find(i * 2) != map.end()) {
                return true;
            }
            map[i]++;
        }
        return false;
    }
};