class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector <string>> map;
        int n = strs.size();
        for (int i = 0; i < n; ++i) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }
        vector <vector <string>> ret;
        for (auto i : map) {
            ret.push_back(i.second);
        }
        return ret;
    }
};