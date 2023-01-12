class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector <string> ret;
        int i = 0;
        while (i < s.length()) {
            ret.push_back(s.substr(i, k));
            i += k;
        }
        if (i < s.length() - 1) ret.push_back(s.substr(i, s.length() - i - 1));
        while (ret.back().length() < k) {
            ret.back().push_back(fill);
        }
        return ret;
    }
};