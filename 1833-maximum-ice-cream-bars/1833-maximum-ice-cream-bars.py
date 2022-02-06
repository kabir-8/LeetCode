class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        s=0
        costs.sort()
        for i in costs:
            if i<=coins:
                coins=coins-i
                s+=1
            if coins==0:
                break
        return s