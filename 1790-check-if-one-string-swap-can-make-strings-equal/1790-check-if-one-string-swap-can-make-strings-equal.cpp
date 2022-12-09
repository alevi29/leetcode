class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map <char, int> map;
        for (int i = 0; i < s1.length(); ++i) {
            map[s1[i]]++;
        }
        for (int i = 0; i < s2.length(); ++i) {
            map[s2[i]]--;
        }
        for (auto i : map) {
            if (i.second != 0) {
                return false;
            }
        }
        int count = 0;
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[i]) {
                count++;
            }
        }
        return count == 2 || count == 0 ? true : false;
    }
};