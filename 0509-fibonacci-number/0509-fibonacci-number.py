# 時間複雜度：O(n), 空間複雜度O(n)
class Solution:
    def fib(self, n:int) -> int:
        if n == 0:
            return n
        dp = [0] * (n+1)
        dp[0] = 0
        dp[1] = 1

        for i in range(2, n+1):
            dp[i] = dp[i-1]+dp[i-2]
        return dp[n]

# 時間複雜度：O(2ⁿ), 空間複雜度O(n)
# class Solution:
#     def fib(self, n: int) -> int:
#         if n == 1 or n == 0:
#             return n
#         else:
#             return self.fib(n-1) + self.fib(n-2)