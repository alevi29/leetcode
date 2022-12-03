class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = 0;
        int full = numBottles;
        int empty = 0;
        while (full > 0) {
            count++;
            full--;
            empty++;
            if (empty == numExchange) {
                full++;
                empty = 0;
            }
        }
        return count;
    }
};