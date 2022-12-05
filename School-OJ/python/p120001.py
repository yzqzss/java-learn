# 循环结构---求余数

# Description

# 输入一个正整数n；求6^1+6^2+...+6^n的和除以7的余数是多少？ 其中6^1表示6的一次方

# Input

# 正整数n

# Output

# 输出余数

n=int(input())

# for i in range(1,n+1):
#     print((6**i)%7) # 6 1 6 1

if n%2 == 0:
    print(0)
else:
    print(6)