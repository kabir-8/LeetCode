class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        if nums==[]:
            return 1
        elif(max(nums)<=0):
            return 1
        x=set(nums)
        i=1
        while i in x:
            i=i+1
        return i