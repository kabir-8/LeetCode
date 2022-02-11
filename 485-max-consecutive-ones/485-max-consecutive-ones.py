class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        m = 0
        for n in nums:
            if n == 1:
                count += 1
                if count > m:
                    m = count
            if n == 0:
                count = 0
        return m
        