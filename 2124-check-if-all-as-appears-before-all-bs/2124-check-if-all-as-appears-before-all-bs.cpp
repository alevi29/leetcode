class Solution {
public:
    bool checkString(string s) {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'b') s[0] = 'c';
            else if (s[0] == 'c') return false;
        }
        return true;
    }
};