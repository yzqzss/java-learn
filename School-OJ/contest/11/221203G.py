# Description

# 寻找规律数字：将1，2，…，9共9个数分成三组，分别组成三个三位数，且使这三个三位数构成A：B：C的比例，试求出所有满足条件的三个三位数的组数。

# Input

# 输入三个正整数分别是a，b，c用空格隔开。

# Output

# 输出一行：满足条件的不同三个三位数的个数

a,b,c=map(int,input().split())

x=111
end=999
count=0

def isRightNum(x):
    strNum = str(x)
    if "0" in strNum:
        return False
    for step in range(1, 10):
        if strNum.count(str(step)) > 1:
            return False
    return True

while x <= end:
    tempn = x*max(a,b,c)
    if (tempn <= end) and isRightNum(tempn):
         longstr = str(x*a)+str(x*b)+str(x*c)
         if isRightNum(longstr) == True:
            count += 1
    x=x+1
print(count)