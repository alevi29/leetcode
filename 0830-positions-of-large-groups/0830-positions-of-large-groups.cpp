class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector <vector <int>> ret;
        int cur = 1;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i+1] == s[i]) cur++;
            else {
                if (cur >= 3) {
                    ret.push_back({i - cur + 1, i});
                }
                cur = 1;                
            }
        }
        if (cur >= 3) {
            ret.push_back({(int)s.length() - cur, (int)s.length() - 1});
        }
        return ret;
    }
};