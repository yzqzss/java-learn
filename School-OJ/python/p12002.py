# 循环结构---乘积末尾的0

# Description

# 输入一个正整数n；求n!=1*2*3*...*n，的乘积结果末尾有多少个0？

# Input

# 输入一个正整数n。（n<=10000000）

# Output

# 输出一行，表示乘积结果末尾是0的个数
total = 0


n=int(input())


while n!=0:
    total += n//5
    n = n//5

print(total)