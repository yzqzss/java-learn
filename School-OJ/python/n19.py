"""
import time
import datetime

y,m,d = map(int, input().split())

# y=y.zfill(4)
# m=m.zfill(2)
# d=d.zfill(2)

# timeStamp = time.mktime(time.strptime(text_time,"%Y %m %d"))
# timeStamp += 3600*24

datePlusOne = datetime.date(y, m, d) + datetime.timedelta(days=1)

print(datePlusOne.strftime('%#Y %#m %#d'),end="")
"""

#这方法不行，超过 y=9999 就不行了。

"""
目前使用的格里高利历闰年规则如下：
计算格里高利历年份是平年还是闰年

    公元年分非4的倍数，为平年。
    公元年分为4的倍数但非100的倍数，为闰年。
    公元年分为100的倍数但非400的倍数，为平年。
    公元年分为400的倍数为闰年。
"""


bMon=31 # Big Mon
mMon=30 # Min Mon

def Feb_days(y):
    is_leapyear = ( ( (y % 4) == 0) and ((y % 100) != 0)) or ((y % 400) == 0)
    # is_leapyear = (y % 4 == 0)
    if is_leapyear == True:
        return 29
    else:
        return 28

y,m,d = map(int, input().split())

feb = Feb_days(y)
Mon = {1:bMon, 2:feb, 3:bMon, 4:mMon, 5:bMon, 6:mMon, 7:bMon, 8:bMon, 9:mMon, 10:bMon, 11:mMon, 12:bMon}


#print(d, Mon[m])

def func():
    global y,m,d
    if m==12 and d==Mon[m]:#跨年
        y+=1
        m=1
        d=1
        return None
    if d==Mon[m]:#跨月
        m+=1
        d=1
        return None
    else:#加一天
        d+=1
        return None

func()

print(y, m, d, end="")
