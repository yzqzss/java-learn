/*围棋的最少个数

Description

有一堆围棋，两个两个数剩一个，三个三个数剩二个，四个四个数剩三个，五个五个数剩四个，六个六个数剩五个，

七个七个正好数完，问最低需要多少颗棋子。

Input

输入格式：无

Output

输出格式：一个正整数*/


#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i < 100000; i++)
    {
        if (i%2==1&&i%3==2&&i%4==3&&i%5==4&&i%6==5&&i%7==0)
        {
            cout<<i;
            break;
        }
    }
}