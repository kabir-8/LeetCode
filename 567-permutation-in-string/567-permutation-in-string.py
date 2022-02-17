class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        x=list(s1)
        x.sort()
        l=len(s1)
        i=0
        y=list(s2)
        while(i<=len(s2)-l):
            temp=[]
            temp=y[i:i+l]
            temp.sort()
            if(temp==x):
                return True
            i+=1
        return False
        