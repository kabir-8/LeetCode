class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if(len(s)==0):
            return 0
        elif(len(s)==1):
            return 1
        r=''
        ans=0
        for i in range(len(s)):
            if s[i] not in r:
                r=r+s[i]
                ans=max(ans,len(r))
            else:
                m=1
                x=r.index(s[i])
                r=r[x+1:]
                r=r+s[i]
        return ans
            
            
        