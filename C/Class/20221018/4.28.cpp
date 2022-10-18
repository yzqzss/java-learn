/*分支结构---成绩等级

Description

根据输入的学生成绩给出相应的等级，

大于或等于90分的等级为A，80～89为B等级，…，60分以下的等级为E，

其余每10分为一等级。

Input

输入一个正整数

Output

输出学生成绩对应的等级*/


#include <stdio.h>

/*
int main(){
    int x;
    scanf("%d",&x);
    if      (x>=90) printf("A");
    else if (x>=80) printf("B");
    else if (x>=70) printf("C");
    else if (x>=60) printf("D");
    else            printf("E");
}
*/

int main(){
    int x;scanf("%d",&x);
    switch (x/10){
        case 10:
        case  9:printf("A");break;
        case  8:printf("B");break;
        case  7:printf("C");break;
        case  6:printf("D");break;
        default:printf("E");
    }
}