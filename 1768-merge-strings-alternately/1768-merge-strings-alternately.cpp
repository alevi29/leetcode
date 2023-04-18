class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret;
        int i = 0;
        while (i < word1.length() && i < word2.length()) {
            ret.push_back(word1[i]);
            ret.push_back(word2[i]);
            ++i;
        }
        if (i < word1.length()) {
            while (i < word1.length()) {
                ret.push_back(word1[i]);
                ++i;
            }
        }
        else if (i < word2.length()) {
            while (i < word2.length()) {
                ret.push_back(word2[i]);
                ++i;
            }
        }
        return ret;
    }
};