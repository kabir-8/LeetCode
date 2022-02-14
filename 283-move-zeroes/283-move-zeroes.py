class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        x=len(nums)
        for i in range(x):
            if 0 in nums:
                nums.remove(0)
                nums.append(0)
                
        