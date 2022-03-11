class Solution:
    def findGCD(self, nums: List[int]) -> int:
        nums.sort()
        a=nums[0]
        b=nums[-1]
        while(a!=b):
            if(a>b):
                a=a-b
            else:
                b=b-a
        return a