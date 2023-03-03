class Solution {
public:
    int strStr(string haystack, string needle) {
        int range = haystack.length() - needle.length() + 1;
        for (int i = 0; i < range; i++) {
            string temp = haystack.substr(i, needle.length());
            if (temp == needle) {
                return i;
            }
        }
        return -1;
    }
};