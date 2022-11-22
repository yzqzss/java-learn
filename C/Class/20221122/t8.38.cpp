/*
输入3个整数，并从大到小排序输出
用指针来做
*/

#include "stdio.h"

int main(){
    int list[3];
    int *p=list;
    int i,j,temp;
    for(i=0;i<3;i++){
        scanf("%d",p+i);
    }
    for (i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(*(p+i)<*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d ",*(p+i));
    }
}