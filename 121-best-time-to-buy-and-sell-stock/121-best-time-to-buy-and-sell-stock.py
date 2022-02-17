class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if(len(prices)<=1):
            return 0
        m=0
        me=prices[0]
        for i in range(len(prices)):
            m=max(m,prices[i]-me)
            me=min(me,prices[i])
        return m
                
        