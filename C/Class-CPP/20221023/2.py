#求 2018 个 2018 的乘积的末两位

num = 2018
i=2
while i <= 2018:
    num = (num*2018)%100
    i+=1

print(num)