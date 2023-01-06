class Solution {
public:
    string truncateSentence(string s, int k) {
        vector <string> words;
        string temp;
        for (auto i : s) {
            if (i == ' ') {
                words.push_back(temp);
                temp.clear();
            }
            else {
                temp.push_back(i);
            }
        }
        words.push_back(temp);
        temp.clear();
        for (int i = 0; i < k; ++i) {
            temp += words[i];
            temp.push_back(' ');
        }
        temp.pop_back();
        return temp;
    }
};