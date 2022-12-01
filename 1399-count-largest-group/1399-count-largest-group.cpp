class Solution {
public:
    int countLargestGroup(int n) {
        int max = 1, ret = 0;
        unordered_map <int, int> map;
        for (int i = 1; i <= n; ++i) {
            int digitSum = 0, temp = i;
            while (temp >= 1) {
                digitSum += temp % 10;
                temp /= 10;
            }
            map[digitSum]++;
            if (map[digitSum] > max) {
                max = map[digitSum];
            }
        }
        for (auto i : map) {
            if (i.second == max) {
                ret++;
            }
        }
        return ret;
    }
};