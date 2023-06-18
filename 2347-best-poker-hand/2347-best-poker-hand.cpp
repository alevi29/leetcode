class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        string ret = "High Card";
        unordered_map <char, int> map;
        for (int i = 0; i < 5; ++i) {
            map[ranks[i]]++;
            map[suits[i]]++;
        }
        
        for (auto i : map) {
            if (i.second >= 2 && (i.first < 'a' || i.first > 'd') && ret == "High Card") ret = "Pair";
            if (i.second >= 3 && (i.first < 'a' || i.first > 'd') && ret == "Pair") ret = "Three of a Kind";
            if (i.second == 5 && i.first >= 'a' && i.first <= 'd') ret = "Flush";
        }
        return ret;
    }
};