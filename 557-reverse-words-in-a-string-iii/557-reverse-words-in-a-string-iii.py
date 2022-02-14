class Solution:
    def reverseWords(self, s: str) -> str:
        sp=s.split(" ")
        r=""
        space=" "
        for x in sp:
            x=x[::-1]
            r=r+space+x
        return r[1:]