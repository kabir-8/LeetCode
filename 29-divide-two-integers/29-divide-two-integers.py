class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        a=abs(dividend)
        b=abs(divisor)
        ans=a//b
        if ans>2147483647 and dividend//divisor>0:
            return 2147483647
        elif ans<=-2147483648:
            return -2147483648
        if divisor<0 and dividend>0 or divisor>0 and dividend<0:
            return -ans
        return ans
        