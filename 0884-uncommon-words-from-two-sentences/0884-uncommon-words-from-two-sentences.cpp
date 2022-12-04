class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector <string> ret;
        string temp;
        int n = s1.length(), m = s2.length();
        unordered_map <string, int> map;
        for (int i = 0; i < n; i++) {
            if (s1[i] == ' ') {
                map[temp]++;
                temp.clear();
            }
            else {
                temp.push_back(s1[i]);
            }
        }
        map[temp]++;
        temp.clear();
        for (int i = 0; i < m; i++) {
            if (s2[i] == ' ') {
                map[temp]++;
                temp.clear();
            }
            else {
                temp.push_back(s2[i]);
            }
        }
        map[temp]++;
        temp.clear();
        for (auto i : map) {
            if (i.second == 1) {
                ret.push_back(i.first);
            }
        }
        return ret;
    }
};