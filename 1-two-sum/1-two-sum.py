class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        r=[]
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                x=nums[i]
                y=nums[j]
                if x+y==target:
                    r.append(i)
                    r.append(j)
                    return r
        return r
                    
        