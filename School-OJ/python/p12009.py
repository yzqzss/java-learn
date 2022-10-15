"""
循环结构---求六位数

Description

编程计算：六位数20□□08能被99整除，□□是多少？

Input

无

Output

输出一个两位数

"""


for i in range(0, 100):
    if (200000+100*i+8)%99==0:
        print(str(i).zfill(2)) #前补0
        break