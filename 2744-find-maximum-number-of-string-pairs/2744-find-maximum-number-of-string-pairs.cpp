class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ret = 0;
        unordered_map <string, int> map;
        for (auto i : words) map[i]++;
        
        for (auto i : words) {
            string temp = i;
            reverse(temp.begin(), temp.end());
            if (map[temp] > 0 && temp != i) {
                ret++;
                map[temp]--;
                map[i]--;
            }
        }
        return ret;
    }
};