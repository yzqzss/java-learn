/*
有3个整数变量 ijk，设置3个对应指针 p123，然后通过指针使 ijk 的值顺序交换，即
i 的原值给j
j 给 k
k 给 i

输出 ijk 的原值和新值*/

#include "stdio.h"

int main(){
    int i=1,j=2,k=3;
    int *p1=&i,*p2=&j,*p3=&k;
    int temp;
    printf("Before: %d %d %d\n",i,j,k);
    temp=*p1;
    *p1=*p3;
    *p3=*p2;
    *p2=temp;
    printf("After: %d %d %d\n",i,j,k);
}