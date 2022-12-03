/*Description

晓东刚学了因数的概念，对因数特别好奇，他想知道每个数的因数有多少个，比如3，有因数1和3，10有
因数1、2、5和10，他更想知道在所有数的因数情况。但是数太多了，他没法算过来，他只想知道从1到n
中，有多少个数的因数正好为m个。

Input

两个正整数n和m，分别表示1~n，要求的m个因数

Output

一个正整数
*/


#include <stdio.h>

int countFact(int n){
    int count = 0;
    for (int i=1;i<=n;i++) {
        if (n % i == 0) count += 1;
    }
    return count;
}

int main(){
    int n,m;
    int count = 0;
    scanf("%d %d",&n,&m);
    for (int i=1;i<=n;i++) {
        if (countFact(i) == m) count += 1;
    }
    printf("%d",count);
}