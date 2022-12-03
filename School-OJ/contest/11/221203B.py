# Description

# 六一儿童节到了，幼儿园长要给小朋友买铅笔发礼物，她发现商店一共有3种包装的铅笔，不同包装内的铅笔数量有可能不同，价格也有可能不同。为了公平起见，园长决定只买同一种包装的铅笔。

# 商店不允许将铅笔的包装拆开，因此园长可能需要购买超过n支铅笔才够给小朋友们发礼物。

# 现在园长P老师想知道，在商店每种包装的数量都足够的情况下，要买够至少n支铅笔*最少*需要花费多少钱。

# Input

# 输入的第一行包含一个正整数n，表示需要的铅笔数量。

# 接下来三行，每行用两个正整数描述一种包装的铅笔：其中第一个整数表示这种包装内铅笔的数量，第二个整数表示这种包装的价格。

# 保证所有的7个数都是不超过10000的正整数。

# Output

# 输出一行一个整数，表示P老师最少需要花费的钱。

n=int(input())
penPrice=[]
for i in range(3):
    # print(i)
    penPrice.append(list(map(int,input().split())))

penPrice.sort(key=lambda x:x[1]/x[0])

# print(penPrice)

planPrice=[]
for i in range(3):
    planPrice.append(penPrice[i][1]*(n//penPrice[i][0]))
    if n%penPrice[i][0]!=0:
        planPrice[i]+=penPrice[i][1]

print(min(planPrice))


#######################
"""
n=int(input())
penPrice=[]
for i in range(3):
    penPrice.append(list(map(int,input().split())))

penPrice.sort(key=lambda x:x[1]/x[0])

orderPen=[0,0,0]
CurrentPen=n

def buyPen(): # 每次购买前判断当前最优购买策略，return id
    global penPrice
    global orderPen
    global CurrentPen
    for i in range(3):
        if CurrentPen>=penPrice[i][0]:
            return i

    # 如果都不够，再判断补上数量后是否经济
    planPrice=[]
    for i in range(3):
        planPrice.append(penPrice[i][1]/CurrentPen) #浮点数
    # return 最小的 planPrice id
    return planPrice.index(min(planPrice))

while CurrentPen>0:
    id=buyPen()
    orderPen[id]+=1
    CurrentPen-=penPrice[id][0]

print(sum([orderPen[i]*penPrice[i][1] for i in range(3)]))
"""