# Dynamic Programming(DP)
## 觀念
- 應該要先潈清楚問題是否有需要使用 Recursion 來解決，然後從 Recursion 的計算中，承認可能有一些 Redundancy，再來考慮是否需要使用 DP 進行改進與優化。
- dp = [0] 或是[1] 定義時要想清楚是求方法、組合、背包問題還是路徑數之類的
- dp = [[1] * n for _ in range (m)]] 即為 dp[m][n]
## 參考資料
- https://shannonhung.github.io/posts/lecture-dp/#Step-2-Recursion-Memoization
- https://algo.itcharge.cn/10.Dynamic-Programming
