class Solution:
    def binarySearch(self, nums, left, right, target): 
        if left > right: # not found condition 
            return -1 
        
        mid = (right+left)//2 
        
        if nums[mid] == target: 
            return mid 
        elif target < nums[mid]: 
            return self.binarySearch(nums, left, mid-1, target)
        else: 
            return self.binarySearch(nums, mid+1, right, target)
        
    
    
    def search(self, nums: List[int], target: int) -> int:
        return self.binarySearch(nums, 0, len(nums)-1, target)    