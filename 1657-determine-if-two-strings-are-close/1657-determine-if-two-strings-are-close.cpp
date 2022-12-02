class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }
        unordered_map <char, int> map;
        unordered_map <char, int> map2;
        vector <int> vec1;
        vector <int> vec2;
        int n = word1.length(), m = word2.length();
        for (int i = 0; i < n; i++) {
            map[word1[i]]++;
        }
        for (int i = 0; i < m; i++) {
            map2[word2[i]]++;
        }
        for (auto i : map) {
            if (map2.find(i.first) == map2.end()) {
                return false;
            }
            vec1.push_back(i.second);
        }
        for (auto i : map2) {
            if (map.find(i.first) == map.end()) {
                return false;
            }
            vec2.push_back(i.second);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        return vec1 == vec2;
    }
};