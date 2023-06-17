class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        unordered_map <char, int> map;
        for (auto i : chars) {
            map[i]++;
        }
        for (auto i : words) {
            sum += i.length();
            unordered_map <char, int> temp = map;
            for (auto j : i) {
                temp[j]--;
                if (temp[j] < 0) {
                    sum -= i.length();
                    break;
                }
            }
        }
        return sum;
    }
};