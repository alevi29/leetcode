class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map <int, int> map;
        vector <vector <int>> ret;
        for (int i = 0; i < nums1.size(); ++i) {
            map[nums1[i][0]] += nums1[i][1];
        }
        for (int i = 0; i < nums2.size(); ++i) {
            map[nums2[i][0]] += nums2[i][1];            
        }
        for (auto i : map) {
            ret.push_back({i.first, i.second});
        }
        return ret;
    }
};