class Solution:
    def romanToInt(self, s):
	    dic = {'M': 1000,'D': 500 ,'C': 100,'L': 50,'X': 10,'V': 5,'I': 1}
	    check_list_dic = {'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
	    n = len(s)
	    i = 0
	    ans = 0
	    while(i < n - 1):
		    if check_list_dic.get(s[i:i+2], 0):
			    ans += check_list_dic[s[i:i+2]]
			    i += 2
		    else:
			    ans += dic[s[i]]
			    i += 1
	    if i == n-1:
		    ans += dic[s[i]]
	    return ans