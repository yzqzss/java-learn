# 回文完全平方数

# Description

# 有这样的五位数n，满足如下条件：

# n是回文数

# n是个完全平方数

# n的各个位数字之和k，也是完全平方数。

# k是两位数，k的两位数之和为r，也是完全平方数

# Input

# 无

# Output

# 一行：所得的满足条件的完全平方数

# n=int(input())

total=0

for i in range(100,320):
    num=i**2
    if str(num)==str(num)[::-1] :
        print(num)
        total_dig = 0

        for dig in str(num):
            total_dig+=int(dig)
        print(total_dig)
            


print(total)