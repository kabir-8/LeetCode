class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        final=[]
        x=[]
        for i in range(numRows):
            num=1
            for j in range(i+1):
                x.append(num)
                num=int(num*(i-j)/(j+1))
                
            final.append(x)
            x=[]
        return final