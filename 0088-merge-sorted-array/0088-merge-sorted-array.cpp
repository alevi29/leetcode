class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> temp;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            }
            else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        if (i == m & j != n) {
            for (int k = j; k < n; k++) {
                temp.push_back(nums2[k]);
            }
        }
        else if (j == n & i != m) {
            for (int k = i; k < m; k++) {
                temp.push_back(nums1[k]);
            }
        }
        nums1.clear();
        for (int i = 0; i < temp.size(); i++) {
            nums1.push_back(temp[i]);
        }
    }
};