class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split(" ")
        c=l.count("")
        for i in range(c):
            l.remove("")
        l.reverse()
        x=" ".join(l)
        return x
        