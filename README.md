## Leetcode Notes

#### 只出现一次的数字

给定一个**非空**整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

```c++
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto& element:nums)
            res ^= element;
        return res;
    }
};
//位运算 使用异或的性质
//所有数进行异或计算，最后得到的结果是Single Number
```

#### X的平方根

实现 `int sqrt(int x)` 函数。

计算并返回 *x* 的平方根，其中 *x* 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

```c++
class Solution {
public:
    int mySqrt(int x) {
      
        
        long long left = 1;
        long long right = x;
        long long mid = 0;
        long ans = 0;
        while(left <= right){
            
            mid = (left + right) / 2;
          
            long long temp = 1LL * mid * mid;
            if( temp > x){
                right = mid - 1;
            }
            else{
                ans = mid;
                left = mid + 1;
               
            }
            
        }
        
        return right;
    }
};
```

### 搜索插入位置

给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。

```c++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid;
        while (l <= r){
            mid = (l + r) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else if(nums[mid] > target){
                r = mid - 1;
            }
        }
        
        return l;
    }
};
```

### 打家劫舍

你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，**如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警**。

给定一个代表每个房屋存放金额的非负整数数组，计算你**在不触动警报装置的情况下，**能够偷窃到的最高金额。

```c++
class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0;
        int sz = nums.size();
        int f[101010];
        if(sz == 0){
            return 0;
        }
        else if(sz == 1){
            return nums[0];
        }
        else if(sz == 2){
            return max(nums[0],nums[1]);
        }
        else{
            f[0] = nums[0];
            f[1] = max(nums[1],nums[0]); // f[1] = nums[1] is wrong !
            
            for(int i = 2; i < sz; i++){
                f[i] = max(nums[i] + f[i - 2], f[i - 1]);
            }
            
        }
        
        return f[sz - 1];
    }
};

// DP
//
```

