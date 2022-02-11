class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n=len(nums)
        if n==0:return 0
        count=1
        ans=1
        prev=nums[0]
        nums.sort()
        for i in range(n):
            if nums[i]==1+prev:
                count+=1
            elif nums[i]!=prev:
                count=1
            prev=nums[i]
            ans=max(ans,count)
        return ans
            
        