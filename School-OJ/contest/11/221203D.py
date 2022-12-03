# Description

# 明明在娱乐园猜灯谜，每个灯谜下面都有一个题目编号，他非常好奇，这些灯谜编号怎么不连续
# ，东一个西一个，他好奇地问妈妈，我要猜编号最小和编号最大的灯谜，聪明的您能帮助小明明
# 找到最小和最大灯谜编号的位置吗？由于编号时工作人员失误，存在从0开始编号和编重复号的
# 情况，如果存在灯谜编号相同情况，以第一次出现位置为准。

# 先输入一个正整数n，接下来有n个整数，表示灯谜的编号

# Input

# 第一行：一个正整数n

# 第二行：n个整数（包括0），每个整数用空格隔开

# Output

# 输出两个正整数，分别表示最大编号和最小编号位置，用空格隔开

n=int(input())
a=[]
line2 = input().split()
for i in line2:
    a.append(int(i))

location_min = a.index(min(a))
location_max = a.index(max(a))

print(location_max, location_min)