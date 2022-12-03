class Solution {
public:
    int countAsterisks(string s) {
        int bars = 0, ret = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            if (bars % 2 == 0 && s[i] == '*') {
                ret++;
            }
            if (s[i] == '|') {
                bars++;
            }
        }
        return ret;
    }
};