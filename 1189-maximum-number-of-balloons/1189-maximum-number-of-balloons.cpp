class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char, int> map;
        for (auto i : text) map[i]++;
        int ret = 0;
        ret = max(ret, map['b']);
        ret = min(ret, map['a']);
        ret = min(ret, map['l'] / 2);
        ret = min(ret, map['o'] / 2);
        ret = min(ret, map['n']);
        return ret;
    }
};