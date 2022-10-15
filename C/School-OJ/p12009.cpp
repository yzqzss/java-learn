/*
循环结构---求六位数

Description

编程计算：六位数20□□08能被99整除，□□是多少？

Input

无

Output

输出一个两位数

*/

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 100; i++)
    {
        if ((200000+100*i+8)%99==0)
        {
            printf("%02d",i);//前补0
            break;
        }
    }
}