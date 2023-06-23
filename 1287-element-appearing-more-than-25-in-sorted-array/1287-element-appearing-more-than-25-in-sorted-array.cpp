class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if (arr.size() == 1) return arr[0];
        int cur = 1;
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] == arr[i + 1]) cur++;
            else {
                cur = 1;
            }
            if (cur > arr.size() / 4) return arr[i];
        }
        return 0;
    }
};