class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count = 0;
        sort(amount.begin(), amount.end());
        while (amount[0] > 0 || amount[1] > 0 || amount[2] > 0) {
            if (amount[1] > 0 && amount[2] > 0) {
                amount[1]--;
                amount[2]--;
                if (amount[0] > amount[1]) {
                    swap(amount[0], amount[1]);
                }
                if (amount[1] > amount[2]) {
                    swap(amount[1], amount[2]);
                }
            }
            else {
                amount[2]--;
            }
            count++;
        }
        return count;
    }
};