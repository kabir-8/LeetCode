class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        x=sum(nums)
        s=(n*(n+1)/2)
        return int(s-x)