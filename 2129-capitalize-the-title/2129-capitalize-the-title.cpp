class Solution {
public:
    string capitalizeTitle(string title) {
        vector <string> words;
        string temp;
        for (int i = 0; i < title.length(); ++i) {
            if (title[i] == ' ') {
                words.push_back(temp);
                temp.clear();
            }
            else {
                temp.push_back(title[i]);
            }
        }
        words.push_back(temp);
        temp.clear();
        for (int i = 0; i < words.size(); ++i) {
            if (words[i].length() <= 2) {
                for (int j = 0; j < words[i].length(); ++j) {
                    words[i][j] = tolower(words[i][j]);
                }
            }
            else {
                words[i][0] = toupper(words[i][0]);
                for (int j = 1; j < words[i].length(); ++j) {
                    words[i][j] = tolower(words[i][j]);
                }
            }
        }
        for (int i = 0; i < words.size() - 1; ++i) {
            temp += words[i];
            temp.push_back(' ');
        }
        temp += words[words.size() - 1];
        return temp;
    }
};