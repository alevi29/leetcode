class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map <int, int> map;
        for (auto i : bills) {
            if (i == 5) map[5]++;
            else if (i == 10) {
                map[10]++;
                if (map[5] == 0) return false;
                else map[5]--;
            }
            else {
                map[20]++;
                if (map[10] == 0) {
                    if (map[5] >= 3) map[5] -= 3;
                    else return false;
                }
                else {
                    if (map[5] == 0) return false;
                    else {
                        map[5]--;
                        map[10]--;
                    }
                }
            }
        }
        return true;
    }
};