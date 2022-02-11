class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x >= 0 and x < 10:
            return True
        str_x = str(x)
        len_x = len(str_x)
        for i in range(len_x):
            if str_x[i] != str_x[len_x - i - 1]:
                return False
        return True
        