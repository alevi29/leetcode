class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l = 0, r = 0;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == ch) {
                r = i;
                break;
            }
        }
        if (r == 0) return word;
        
        while (l < r) {
            swap(word[l], word[r]);
            ++l;
            --r;
        }
        return word;
    }
};