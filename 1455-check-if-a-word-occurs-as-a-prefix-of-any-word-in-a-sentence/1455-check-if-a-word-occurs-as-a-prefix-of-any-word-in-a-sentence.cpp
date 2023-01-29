class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector <string> words;
        words.push_back(searchWord);
        searchWord.clear();
        for (auto i : sentence) {
            if (i == ' ') {
                words.push_back(searchWord);
                searchWord.clear();
            }
            else {
                searchWord.push_back(i);
            }
        }
        words.push_back(searchWord);
        for (int i = 1; i < words.size(); ++i) {
            if (words[i].length() >= words[0].length()) {
                string temp = words[i].substr(0, words[0].length());
                if (temp == words[0]) return i;
            }
        }
        return -1;
    }
};