class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, i = s.length() - 1;
        while (i >= 0) {
            if (s[i] == ' ') {
                if (length == 0) --i;
                else return length;
            }
            
            else {
                --i;
                ++length;
            }
        }
        return length;
    }
};