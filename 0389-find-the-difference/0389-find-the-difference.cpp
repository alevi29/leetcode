class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> map;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            map[s[i]]++;
        }
        for (int i = 0; i < n + 1; i++) {
            map[t[i]]--;
        }
        for (auto i : map) {
            if (i.second != 0) {
                return i.first;
            }
        }
        return t[0];
    }
};