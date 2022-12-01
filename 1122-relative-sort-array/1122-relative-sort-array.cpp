class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map <int, int> map;
        vector <int> ret;
        int n = arr1.size(), m = arr2.size();
        for (int i = 0; i < n; ++i) {
            map[arr1[i]]++;
        }
        for (int i = 0; i < m; ++i) {
            while (map[arr2[i]] > 0) {
                ret.push_back(arr2[i]);
                map[arr2[i]]--;
            }
        }
        for (auto i : map) {
            while (i.second > 0) {
                ret.push_back(i.first);
                i.second--;
            }
        }
        return ret;
    }
};