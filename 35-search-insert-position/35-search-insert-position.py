class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
            k=0
            for i in range(0,len(nums)):
                if nums[i]==target:
                    return i
                elif nums[i]>target:
                    return i
                elif nums[len(nums)-1]<target:
                    return len(nums)
            