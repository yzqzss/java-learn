/*n 分解成质因子连乘的形式输出*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        while(n%i==0){
            printf("%d*",i);
            n=n/i;
        }
    }
    printf("\b");
}