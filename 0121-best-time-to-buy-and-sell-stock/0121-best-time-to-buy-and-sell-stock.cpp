class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < lowest) {
                lowest = prices[i];
            }
            if (prices[i] - lowest > maxProfit) {
                maxProfit = prices[i] - lowest;
            }  
        }
        return maxProfit;
    }
};