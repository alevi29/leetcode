class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector <int> temp = nums;
        sort(temp.begin(), temp.end());
        if (nums == temp) return true;
        reverse(temp.begin(), temp.end());
        if (nums == temp) return true;
        return false;
    }
};