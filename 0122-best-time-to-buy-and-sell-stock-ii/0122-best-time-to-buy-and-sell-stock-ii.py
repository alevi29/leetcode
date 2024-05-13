class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max = 0
        currentPrice = prices[0]
        for i in range(len(prices)):
            if prices[i] > currentPrice:
                max += prices[i] - currentPrice
            currentPrice = prices[i]
        return max
        