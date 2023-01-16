class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> map;
        for (auto i : nums1) {
            map[i]++;
        }
        nums1.clear();
        for (auto i : nums2) {
            if (map.find(i) != map.end() && map[i] != 0) {
                nums1.push_back(i);
                map[i] = 0;
            }
        }
        return nums1;
    }
};