class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        arr=[]
        final=[]
        for i in mat:
            for j in i:
                arr.append(j)
        if(r*c>len(arr) or r*c<len(arr)):
            return mat
        ind=0
        for i in range(r):
            temp=[]
            for j in range(c):
                temp.append(arr[ind])
                ind+=1
            final.append(temp)
        return final
            
        