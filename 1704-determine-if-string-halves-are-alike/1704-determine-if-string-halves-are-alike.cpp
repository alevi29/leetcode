class Solution {
public:
    bool halvesAreAlike(string s) {
        int left = 0, right = 0;
        int n = s.length() / 2;
        string half = s.substr(n, n);
        for (int i = 0; i < n; i++) {
            s.pop_back();
        }
        for (int i = 0; i < n; i++) {
            char first = tolower(s[i]);
            char second = tolower(half[i]);
            if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                left++;
            }
            if (second == 'a' || second == 'e' || second == 'i' || second == 'o' || second == 'u') {
                right++;
            }
        }
        return left == right;
    }
};