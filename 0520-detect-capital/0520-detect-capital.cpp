class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        if (n == 1) {
            return true;
        }
        if (word[0] == toupper(word[0])) {
            if (word[1] != toupper(word[1])) {
                for (int i = 2; i < n; i++) {
                    if (word[i] == toupper(word[i])) {
                        return false;
                    }
                }
            }
            else {
                for (int i = 2; i < n; i++) {
                    if (word[i] != toupper(word[i])) {
                        return false;
                    }
                }
            }
        }
        else {
            for (int i = 1; i < n; i++) {
                if (word[i] == toupper(word[i])) {
                    return false;
                }
            }
        }
        return true;
    }
};