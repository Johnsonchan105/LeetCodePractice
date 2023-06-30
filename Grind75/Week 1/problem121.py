class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        left = 0
        right = 1
        max_profit = 0
        while right < len(prices):
            profit = prices[right] - prices[left]
            if profit > 0:
                max_profit = max(profit, max_profit)
            else:
                left = right
            right += 1
        return max_profit