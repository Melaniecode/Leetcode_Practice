# Dynamic Programming(DP)
## 觀念
- 應該要先潈清楚問題是否有需要使用 Recursion 來解決，然後從 Recursion 的計算中，承認可能有一些 Redundancy，再來考慮是否需要使用 DP 進行改進與優化。
- dp = [0] 或是[1] 定義時要想清楚是求方法、組合、背包問題還是路徑數之類的
- dp = [[1] * n for _ in range (m)]] 即為 dp[m][n]
## 題目
- [0509-fibonacci-number](https://github.com/Melaniecode/Leetcode_Practice/tree/main/0509-fibonacci-number) 
- [0062-unique-paths](https://github.com/Melaniecode/Leetcode_Practice/tree/main/0062-unique-paths)
- [0070-climbing-stairs](https://github.com/Melaniecode/Leetcode_Practice/tree/main/0070-climbing-stairs)

## Stack
## 觀念
- FILO
- [ , , ] 靠左是底部，靠右是頂部
- 要注意頂部會不會full，底部有沒有empty
- 
  1. 推入（Push）： 使用 append() 方法將元素添加到列表的末尾。
  2. 彈出（Pop）： 使用 pop() 方法從列表的末尾移除並返回元素。
  3. 查看頂部元素（Peek）： 使用索引 [-1] 來獲取列表的最後一個元素。
## 參考資料
- https://shannonhung.github.io/posts/lecture-dp/#Step-2-Recursion-Memoization
- https://algo.itcharge.cn/10.Dynamic-Programming
