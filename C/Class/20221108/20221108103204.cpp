/*使用调用自定义函数的形式百年城求s=m!+n!+k!。要求m 、n、k的值从键盘输入。*/

#include <stdio.h>

int factorial(int num){
    if (num < 1) printf("error");
    int sum=1;
    for (int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
}

int main(){
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int s=factorial(m)+factorial(n)+factorial(k);
    printf("%d",s);
}