class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size(), count = 0;
        for (int i = 0; i < n; i++) {
            string temp = s.substr(0, words[i].length());
            if (temp.length() <= s.length() && temp == words[i]) {
                count++;
            }
        }
        return count;
    }
};