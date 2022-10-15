"""循环结构--余数和

Description

给出正整数n和k，计算G(n, k)=1 modn+ 2 modn+ 3modn+ … +kmod n的值，其中k mod n表示k除以n的余数。

Input

两个整数n k

Output

一个整数"""



n,k=map(int,input().split())
pack = (n*(n-1))//2
sum = pack*(k//n)
last_num = ((k%n)*((k%n)+1))//2
sum+=last_num

print(int(sum))