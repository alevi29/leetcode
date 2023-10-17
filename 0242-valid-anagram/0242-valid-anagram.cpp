class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.length() < s.length()) return false;
        unordered_map <char, int> map;
        for (auto i : s) map[i]++;
        for (auto i : t) {
            if (map[i] == 0) return false;
            map[i]--;
        }
        return true;
    }
};