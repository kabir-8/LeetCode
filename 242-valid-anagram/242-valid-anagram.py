class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        for i in s:
            if s.count(i)!=t.count(i):
                return False
        for i in t:
            if t.count(i)!=s.count(i):
                return False
        return True
        