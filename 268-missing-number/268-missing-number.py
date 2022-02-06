class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        i=0
        while i in nums:
            i=i+1
        return i