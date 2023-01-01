class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int ret = INT_MAX;
        unordered_map <char, int> map1, map2;
        for (auto i : s) {
            map1[i]++;
        }
        for (auto i : target) {
            map2[i]++;
        }
        for (auto i : map2) {
            if (map1.find(i.first) != map1.end()) {
                if (map1[i.first] / i.second < ret) {
                    ret = map1[i.first] / i.second;
                } 
            }
            else {
                return 0;
            }
        }
        return ret;
    }
};