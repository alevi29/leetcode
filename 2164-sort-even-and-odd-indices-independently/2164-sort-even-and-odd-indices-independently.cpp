class Solution {
    static bool comp(int a, int b) {
        return a > b;
    }
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector <int> odds;
        vector <int> evens;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            i % 2 == 0 ? evens.push_back(nums[i]) : odds.push_back(nums[i]);
        }
        sort(odds.begin(), odds.end(), comp);
        sort(evens.begin(), evens.end());
        int i = 0, j = 0, index = 0;
        while (i < odds.size() && j < evens.size()) {
            nums[index] = evens[j];
            nums[index + 1] = odds[i];
            i++;
            j++;
            index += 2;
        }
        if (i < odds.size()) {
            nums[index+1] = odds[i];
        }
        if (j < evens.size()) {
            nums[index] = evens[j];
        }
        return nums;
    }
};