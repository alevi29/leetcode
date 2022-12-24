class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map <int, int> map;
        for (int i = 0; i < digits.size(); ++i) {
            map[digits[i]]++;
        }
        vector <int> ret;
        for (int i = 100; i <= 998; i += 2) {
            int temp = i, check = 0;
            unordered_map <int, int> tempMap = map;
            while (temp >= 1) {
                tempMap[temp % 10]--;
                if (tempMap[temp % 10] < 0) {
                     check = 1;
                }
                temp /= 10;
            }
            if (check == 0) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};