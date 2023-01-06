class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map <char, int> map;
        for (auto i : brokenLetters) {
            map[i]++;
        }
        vector <string> words;
        brokenLetters.clear();
        for (auto i : text) {
            if (i == ' ') {
                words.push_back(brokenLetters);
                brokenLetters.clear();
            }
            else {
                brokenLetters.push_back(i);
            }
        }
        words.push_back(brokenLetters);
        int ret = words.size();
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                if (map.find(words[i][j]) != map.end()) {
                    ret--;
                    break;
                }
            }
        }
        return ret;
    }
};