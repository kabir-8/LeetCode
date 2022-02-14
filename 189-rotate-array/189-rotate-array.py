class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        if(len(nums)==1):
            return nums
        if(k>len(nums)):
            k=k%len(nums)
        x=nums[-k:]+nums[:-k]
        nums.clear()
        for i in x:
            nums.append(i)
        return nums
        