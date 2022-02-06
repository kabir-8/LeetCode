class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        l=len(nums)
        x=sum(nums)
        s=(l*(l+1)/2)
        return int(s-x)