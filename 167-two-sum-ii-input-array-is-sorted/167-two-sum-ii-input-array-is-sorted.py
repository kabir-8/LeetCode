class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        for i in range(len(numbers)):
            s=i+1
            e=len(numbers)-1
            k=target-numbers[i]
            while(s<=e):
                m=s+(e-s)//2
                if numbers[m]==k:
                    return [i+1,m+1]
                elif numbers[m]>k:
                    e=m-1
                else:
                    s=m+1
        