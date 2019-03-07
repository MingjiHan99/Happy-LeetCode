## Leetcode Notes


#### 035.搜索插入位置

二分


#### 069.X的平方根

二分

####　121.买卖股票的最佳时机

ans = max(ans,price[i] - min_val[i - 1])
min_val[n] = min {a[0],a[1], ... ,a[n]}

####　121.买卖股票的最佳时机II
水题
居然比Ｉ简单

#### 136.只出现一次的数字

利用位运算 xor计数


#### 198.打家劫舍

DP 
dp[i] = max(dp[i - 2] + val[i],dp[i - 1])

