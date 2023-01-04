class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index, ret = 0;
        if (ruleKey == "type") index = 0;
        else if (ruleKey == "color") index = 1;
        else index = 2;
        for (auto i : items) {
            if (i[index] == ruleValue) {
                ret++;
            }
        }
        return ret;
    }
};