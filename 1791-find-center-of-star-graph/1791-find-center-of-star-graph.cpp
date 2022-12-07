class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int, int> map;
        for (int i = 0; i < edges.size(); i++) {
            for (int k = 0; k < 2; k++) {
                map[edges[i][k]]++;
                if (map[edges[i][k]] == edges.size()) {
                    return edges[i][k];
                }
            }
        }
        return 0;
    }
};