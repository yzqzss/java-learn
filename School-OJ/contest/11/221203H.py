# Description

# 在医院门口有n个病人在排队就诊，现有r个医生准备就诊，1至n个病人诊疗时间分别为T1，T2，…，Tn为整数且各不相等。

# 如何安排他们的排队顺序，使得他们总体花费时间最少，花费时间=诊疗时间+等待时间

# Input

# 第一行：两个正整数n和r，用空格隔开 ； n表示病人人数，r表示医生人数

# 第二行：n个正整数Ti，表示每个病人就诊时间，用空格隔开

# Output

# 他们耗费的总时间

n,r=map(int,input().split())
t=list(map(int,input().split()))

t.sort()#默认升序

# 计算时间
def calTime(t):
    time=0
    for i in range(len(t)):
        time+=t[i]*(len(t)-i)
    return time

print(calTime(t)//r)