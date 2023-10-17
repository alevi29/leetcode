class Solution {
public:
    bool isPalindrome(string s) {
        string formatted;
        for (auto i : s) {
            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9')) {
                formatted.push_back(tolower(i));
            }
        }
        int left = 0, right = formatted.length() - 1;
        while (left < right) {
            if (formatted[left] != formatted[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
};