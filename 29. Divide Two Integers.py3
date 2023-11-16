class Solution:
    def divide(self, dividend: int, divisor: int) -> int:

        a = dividend/divisor
        a = int (a)

        if(a > (pow(2, 31)-1)):
            return (pow(2, 31)-1)
        if (a < (pow(-2, 31)) ):
            return (pow(-2, 31))

        return a
