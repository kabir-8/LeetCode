class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        x,y=list(ransomNote),list(magazine)
        for i in x:
            if i in y:
                y.remove(i)
            else:
                return False
        return True
        