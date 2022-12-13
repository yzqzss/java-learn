//输出1-50所有整数的和。

#include <stdio.h>

int main(){
    int sum=0;
    for (int i=1; i<=50; i++){
        sum+=i;
    }
    printf("%d", sum);
}