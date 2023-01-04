class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ret = 0;
        unordered_map <int, int> map;
        for (auto i : tasks) {
            map[i]++;
        }
        for (auto i : map) {
            if (i.second == 1) {
                return -1;
            }            
            
            while (i.second > 0) {
                if (i.second == 2 || i.second == 3) {
                    i.second = 0;
                }
                else if (i.second == 4) {
                    i.second = 2;
                }
                else {
                    i.second -= 3;
                }
                ret++;
            }
        }
        return ret;
    }
};