class Solution(object):
    def romanToInt(self, s):
        romint= {
            'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000
        }
        s= s.replace("IV","IIII")
        s= s.replace("IX","VIIII")
        s= s.replace("XL","XXXX")
        s= s.replace("XC","LXXXX")
        s= s.replace("CD","CCCC")
        s= s.replace("CM","DCCCC")
        l= len(s)
        ans=0
        for x in s:
            ans= ans + romint[x]
        return ans


        """
        :type s: str
        :rtype: int
        """
