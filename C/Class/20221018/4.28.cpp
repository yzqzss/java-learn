/*分支结构---成绩等级

Description

根据输入的学生成绩给出相应的等级，

大于或等于90分的等级为A，80～89为B等级，…，60分以下的等级为E，

其余每10分为一等级。

Input

输入一个正整数

Output

输出学生成绩对应的等级*/


#include <iostream>
using namespace std;


int main(){
    int x;
    cin>>x;
    if (x>100) {cout<<"[Error] 爆分了，你厉害！";return 1;}
    switch (x/10){
        case 10:
        case  9:cout<<"A";break;
        case  8:cout<<"B";break;
        case  7:cout<<"C";break;
        case  6:cout<<"D";break;
        default:cout<<"E";
    }
}