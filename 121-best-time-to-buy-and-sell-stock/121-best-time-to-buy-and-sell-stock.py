class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        cur_min = prices[0]
        best = -math.inf
        for i in range(1, len(prices)):
            best = max(prices[i] - cur_min, best)
            cur_min = min(prices[i], cur_min)
        return max(best, 0)
                
        