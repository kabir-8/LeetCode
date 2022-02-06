class Solution(object):
    def largestAltitude(self, gain):
        m=-999
        s=0
        for i in gain:
            s=s+i
            m=max(s,m)
        if m<0:
            return 0
        return m
        