"""Description

有一条圆形跑道长l米，小明和小林在同一地点同时出发，沿跑道背向而行。

小明每分钟前行a米，小林每分钟前行b 米，经过c分钟后，两人相遇了几次？

Input

四个正整数，分别是l，a，b，c用空格隔开

Output

一个正整数"""

#背向

l, a, b, c = map(int, input().split())#l为跑道长度，a为小明速度，b为小林速度，c为时间
print(((a+b)*c)//l)
