class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t) return true;
        int index = 0;
        for (auto i : t) {
            if (i == s[index]) index++;
            if (index == s.length()) return true;
        }
        return false;
    }
};