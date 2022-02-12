class Solution:
    def countTriples(self, n: int) -> int:
        l=[]
        count=0
        n=n+1
        for i in range(1,n):
            for j in range(1,n):
                k=sqrt((i*i)+(j*j))
                if(k<n and k.is_integer()):
                    count+=1   
                    l.append([i,j,k])
        print(l)
        return count
                    
        