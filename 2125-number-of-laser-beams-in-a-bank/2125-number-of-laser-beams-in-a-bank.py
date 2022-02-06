class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        s=0
        prev=bank[0].count("1")
        for i in range(1,len(bank)):
            x=bank[i].count("1")
            if(x==0):
               continue
            x=bank[i].count("1")
            s=s+(prev*x)
            prev=x
        return s
            