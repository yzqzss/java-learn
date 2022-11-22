/*
输入15个证书存入一组数组，再逆序重新存放，然后输出
用指针来做*/

#include "stdio.h"

int main(){
    int len_list=15;
    int list[len_list];
    int *p=list;

    //input
    for (int i=0;i<len_list;i++){
        scanf("%d",p+i);
    }

    //reverse
    int temp;
    for (int i=0;i<len_list/2;i++){
        temp=*(p+i);
        *(p+i)=*(p+len_list-1-i);
        *(p+len_list-1-i)=temp;
    }

    //output
    for (int i=0;i<len_list;i++){
        printf("%d ",*(p+i));
    }
}