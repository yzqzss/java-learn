/* 
定义数组 int a[4][6], b[4][6], c[4][6]
1. 从键盘输入数据给数组 a、b
2. 将 a 与 b 各对应元素做比较，如果相等，则数组 c 的对应元素 = 0 。若 a>b -> c=1 若 a<b -> c=-1
*/

#include <stdio.h>

int a[4][6],b[4][6],c[4][6];

void loadFromKeyboard(char obj){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            printf("Input %c[%d][%d]:",obj,x,y);
            if (obj == 'a') scanf("%d", &a[x][y]);
            if (obj == 'b') scanf("%d", &b[x][y]);
            // if (obj == 'c') scanf("%d", &c[x][y]);
        }
    }
}

void comperAWithB_toChangeC(){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            if      (a[x][y] > b[x][y]) c[x][y]=1;
            else if (a[x][y] < b[x][y]) c[x][y]=-1;
            else                        c[x][y]=0;
        }
    }
}

void printC(){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            printf("c[%d][%d]=%d\t",x,y,c[x][y]);
        }
        printf("\n");
    }
}

int main(){
    loadFromKeyboard('a');
    loadFromKeyboard('b');
    comperAWithB_toChangeC();
    printC();
}