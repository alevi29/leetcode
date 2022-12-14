class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> words;
        string temp;
        unordered_map <char, string> map;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp.clear();
            }
            else {
                temp.push_back(s[i]);
            }
        }
        words.push_back(temp);
        if (pattern.length() != words.size()) {
            return false;
        }
        for (int i = 0; i < words.size(); ++i) {
            if (map.find(pattern[i]) == map.end()) {
                map[pattern[i]] = words[i];
            }
            else {
                if (map[pattern[i]] != words[i]) {
                    return false;
                }
            }
            for (auto j : map) {
                if (j.first != pattern[i] && j.second == words[i]) {
                    return false;
                }
            }            
        }
        return true;
    }
};