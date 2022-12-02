class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.length() < 3) {
            return 0;
        }
        int n = s.length() - 2, count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) {
                count++;
            }
        }
        return count;
    }
};