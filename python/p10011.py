"""
p10011
"""
strN=input()[::-1]
for i in strN[0:len(strN)-1]:
    print(i, end=' ')
print(strN[len(strN)-1])
