// 输入10个整数，要求使用冒泡排序法对其进行升序排序。

#include <stdio.h>

int main(){
    int list[10];
    for (int i=0; i<10; i++){
        scanf("%d", &list[i]);
    }
    
    // 升序
    int temp;
    for (int i=0; i<10; i++){
        for (int j=0; j<10-i-1; j++){
            if (list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }

    for (int i=0;i<10;i++){
        printf("%d ",list[i]);
    }
}