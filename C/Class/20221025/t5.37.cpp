/*求 Sn=a+aa+aaa+aaaa+…… 的值*/

#include <stdio.h>

int main(){
    int a,n;
    scanf("%d%d",&a,&n);
    int sum=0;
    int tempNum=0;
    for(int i=1;i<=n;i++){
        tempNum=tempNum*10+a;
        sum+=tempNum;
        // printf("%d\n",tempNum);
    }
    printf("%d", sum);
}