class Solution {
public:
    int passThePillow(int n, int time) {
        int cur = 1;
        bool up = true;
        for (int i = 0; i < time; ++i) {
            if (cur == n) up = false;
            else if (cur == 1) up = true;
            if (up == true) {
                cur++;
            }
            else {
                cur--;
            }
        }
        return cur;
    }
};