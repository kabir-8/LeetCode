class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        x=[]
        for i in nums:
            if i not in x:
                x.append(int(i))
        nums.clear()
        for i in x:
            nums.append(i)
        
        