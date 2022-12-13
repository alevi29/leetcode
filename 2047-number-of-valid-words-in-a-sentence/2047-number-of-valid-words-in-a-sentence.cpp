class Solution {
public:
    int countValidWords(string sentence) {
        vector <string> words;
        string temp;
        for (int i = 0; i < sentence.length(); ++i) {
            if (sentence[i] == ' ') {
                if (temp.length() != 0) {
                    words.push_back(temp);
                    temp.clear();
                }
            }
            else {
                temp.push_back(sentence[i]);
            }
        }
        if (temp.length() != 0) words.push_back(temp);
        int count = words.size();
        for (int i = 0; i < words.size(); ++i) {
            cout << words[i] << "|";
            int hCount = 0;
            bool valid = true;
            int j = 0;
            while (j < words[i].length() && valid == true) {
                if (words[i][j] >= '0' && words[i][j] <= '9') {
                    valid = false;
                }
                else if (words[i][j] == '-') {
                    hCount++;
                    if (hCount > 1) {
                        valid = false;
                    }
                    else if (j == 0 || j == words[i].length() - 1) {
                        valid = false;
                    }
                    else if ((words[i][j-1] < 'a' || words[i][j-1] > 'z') || (words[i][j+1] < 'a' || words[i][j+1] > 'z')) {
                        valid = false;
                    }
                }
                else if (words[i][j] == '!' || words[i][j] == '.' || words[i][j] == ',') {
                    if (j != words[i].length() - 1) {
                        valid = false;
                    }
                }
                j++;
            }
            if (valid == false) {
                count--;
            }
        }
        return count;
    }
};