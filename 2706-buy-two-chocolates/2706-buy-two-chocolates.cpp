class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = 101, min2 = 102;
        for (auto i : prices) {
            if (i <= min1) {
                min2 = min1;
                min1 = i;
            }
            if (i < min2 && i > min1) min2 = i;
        }
        return money - min1 - min2 >= 0 ? money - min1 - min2 : money;
    }
};