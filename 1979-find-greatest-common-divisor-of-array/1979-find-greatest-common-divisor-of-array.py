class Solution:
    def findGCD(self, nums: List[int]) -> int:
        a=min(nums)
        b=max(nums)
        while(a!=b):
            if(a>b):
                a=a-b
            else:
                b=b-a
        return a