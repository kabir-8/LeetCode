class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        x=list(set(s))
        for i in x:
            if (s.count(i)!=t.count(i)):    return False
        x=list(set(t))
        for i in x:
            if(s.count(i)!=t.count(i)):return False
        return True