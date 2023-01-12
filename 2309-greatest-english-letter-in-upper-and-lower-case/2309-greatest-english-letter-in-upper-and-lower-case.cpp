class Solution {
public:
    string greatestLetter(string s) {
        bool found = false;
        char ret = 'A';
        unordered_map <char, int> map;
        for (auto i : s) {
            map[i]++;
            if (i >= 'a' && i <= 'z' && map.find(i - 32) != map.end()) {
                found = true;
                if (i - 32 > ret) {
                    ret = i - 32;
                }
            }
            else {
                if (map.find(i + 32) != map.end()) {
                    found = true;
                    if (i > ret) {
                        ret = i;
                    }
                }
            }
        }
        if (found == false) return "";
        string ans;
        ans.push_back(ret);
        return ans;
    }
};