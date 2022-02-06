class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        s=0
        ms=sum(nums)
        for i in nums:
            s=s+i
            if(s>ms):
                ms=s
            if(s<0):
                s=0
        return ms
        