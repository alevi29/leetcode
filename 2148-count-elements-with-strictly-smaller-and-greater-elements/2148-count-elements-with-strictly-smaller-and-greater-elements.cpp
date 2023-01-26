class Solution {
public:
    int countElements(vector<int>& nums) {
        unordered_map <int, int> map;
        for (auto i : nums) {
            map[i]++;
        }
        if (map.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        int index = 0, ret = nums.size();
        while (index < nums.size() && nums[index] == nums[0]) {
            ret--;
            index++;
        }
        index = nums.size() - 1;
        while (index >= 0 && nums[index] == nums[nums.size() - 1]) {
            ret--;
            index--;
        }
        return ret;
    }
};