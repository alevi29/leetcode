class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size2 = nums2.size();
        for (int i = 0; i < size2; i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        return size % 2 == 0 ? (double) (nums1[size / 2] + nums1[size / 2 - 1]) / 2 : nums1[size/2];
    }
};