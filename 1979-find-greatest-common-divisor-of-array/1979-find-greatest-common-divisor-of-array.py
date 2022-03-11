class Solution:
    def s(self,a,b):
        if(b==0):
            return a
        return self.s(b,a%b)
    def findGCD(self, nums: List[int]) -> int:
        nums.sort()
        a=nums[0]
        b=nums[-1]
        return self.s(a,b);