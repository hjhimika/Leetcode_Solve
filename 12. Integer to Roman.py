class Solution(object):
    def intToRoman(self, num):
        val = [1000,900,500,400,100,90,50,40,10,9,5,4,1] 
        symb =["M", "CM", "D", "CD" , "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" ]
        res=''
        i=0
        while(num!=0):
            r= num / val[i]
            res= res + symb[i]*r
            num= num % val[i]
            i = i+1

        return res


        """
        :type num: int
        :rtype: str
        """
