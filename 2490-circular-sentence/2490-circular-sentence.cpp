class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector <string> words;
        string temp;
        for (int i = 0; i < sentence.length(); ++i) {
            if (sentence[i] == ' ') {
                words.push_back(temp);
                temp.clear();
            }
            else {
                temp.push_back(sentence[i]);
            }
        }
        words.push_back(temp);
        for (int i = 0; i < words.size(); ++i) {
            if (words[i][words[i].length() - 1] != words[(i + 1) % words.size()][0]) return false;
        }
        return true;
    }
};