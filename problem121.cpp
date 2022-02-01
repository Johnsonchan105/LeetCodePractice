class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 1)
            return 0;
        int profit = prices[1] - prices[0];
        int mins = prices[0];
        for (int i = 0; i < prices.size() - 1; i++)
        {
            profit = max(profit, prices[i] - mins);
            mins = min(prices[i], mins);
        }
        profit = max(prices[prices.size() - 1] - mins, profit);
        return profit;
    }
};