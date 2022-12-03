class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map <int, int> map;
        int n = items1.size(), m = items2.size();
        for (int i = 0; i < n; i++) {
            map[items1[i][0]] += items1[i][1];
        }
        for (int i = 0; i < m; i++) {
            map[items2[i][0]] += items2[i][1];
        }
        vector <vector <int>> ret(map.size());
        int index = 0;
        for (auto i : map) {
            ret[index].push_back(i.first);
            ret[index].push_back(i.second);
            index++;
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};