class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        a=[]
        for i in nums1:
            a.append(i)
        for j in nums2:
            a.append(j)
        n=len(a)
        a.sort()
        mid = len(a)//2
        res = (a[mid] +a[~mid]) / 2
        return res
        