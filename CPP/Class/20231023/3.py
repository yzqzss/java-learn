#有 n 个，1个次品，次品比正品轻。

n=int(input())

k=0

while 3**k < n:
    k+=1

print(k)