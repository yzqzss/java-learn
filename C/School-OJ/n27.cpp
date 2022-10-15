/*求a、b、c的值

Description

已知一个8位数 123ab45c能被792整除，求a，b，c的值？

Input

输入格式：无

Output

输出格式：

三个数字用空格隔开*/

#include<iostream>
using namespace std;

int main(){
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b< 10; b++)
        {
            for (int c = 0; c < 10; c++)
            {
                if ((12300000+10000*a+1000*b+450+c)%792==0)
                {
                    cout<<a<<" "<<b<<" "<<c;
                    // return 0;
                }
            }
        }
    }
}