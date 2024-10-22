#This is the first solution but it will give TLE 
#class Solution:
#     def climbStairs(self, n: int) -> int:
#         if n==1 : return 1
#         if n==2 : return 2
#         return self.climbStairs(n-1)+self.climbStairs(n-2)

#for avoiding TLE use DP method
class Solution:
    def climbStairs(self, n: int) -> int:
        if n==1 or n==0 : return 1
        if n==2 : return 2

        dp= [0]* (n+1)
        dp[0]=dp[1]=1

        for i in range (2,n+1):
            dp[i] = dp[i-1] + dp[i-2]
        
        return dp[n]
