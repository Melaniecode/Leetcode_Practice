class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 0:
            return 1
        dp = [0] * (n+1)
        dp[0] = 1
        dp[1] = 1

        for i in range(2, n+1):
            dp[i] = dp[i-1] + dp[i-2] # 每次只能爬1或2階，因此第i階層會是第i-1階上排1層或是第i-2階向上爬2層
        return dp[n]