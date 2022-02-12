class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        l=9999
        count=0
        pos=0
        flag=0
        smallest=""
        le=len(strs)
        if(le==0):
            return ""
        if(le==1):
            return strs[0]
        for i in range(le):
            if len(strs[i])<=l:
                l=len(strs[i])
                smallest=strs[i]
                pos=i
        for i in range(len(smallest)):
            temp=smallest[i]
            for j in strs:
                if(j[i]!=temp):
                    flag=1
                    break
            if flag==1:
                break
            count+=1
        return smallest[:count]
                    
        