class Solution:
    def climbStairs(self, n: int) -> int:

        dp = [-1] * (n+2)

#           def calc(cur):
            
#             if dp[cur] != -1:
#                 return dp[cur]
            
#             if cur == n:
#                 return 1
#             if cur > n :
#                 return 0
            
#             dp[cur]  = calc(cur +1) + calc(cur +2)
#             return dp[cur]
        
#         calc(0)

        dp[n] = 1
        dp [n-1] = 1
        
        for i in range(n-2,-1,-1):
            
            dp[i] = dp[i+2] + dp[i+1]

        return dp[0]