class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map <int, int> map;
        for (auto i : candyType) {
            map[i]++;
        }
        return map.size() >= candyType.size() / 2 ? candyType.size() / 2 : map.size();
    }
};