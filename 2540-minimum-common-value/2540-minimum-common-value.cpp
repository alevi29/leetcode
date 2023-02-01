class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        auto it = set_intersection(begin(nums1), end(nums1), begin(nums2), end(nums2), nums1.begin());
        return it == nums1.begin() ? -1 : nums1.front();
    }
};