class Solution {
public:
    string makeFancyString(string s) {
        string ret;
        ret.push_back(s[0]);
        int cur = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                cur++;
            }
            else {
                cur = 1;
            }
            if (cur < 3) ret.push_back(s[i]);
        }
        return ret;
    }
};