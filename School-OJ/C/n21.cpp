/*Description

输入一个三位数a，求有多少个三位数与a的和发生进位的个数。

Input

输入一个三位数

Output

输出发生进位的三位数个数*/

//在四则运算的加法及减法中，进位及借位是指某一位数计算后产生一个数字，会影响更高位数的计算结果

#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int count=0;
    for(int i=100;i<1000;i++){
        if (a%10+i%10>=10)          continue;//个位进位
        if (a%100/10+i%100/10>=10 and i>=100) continue;//十位进位
        if (a+i>=1000)              continue;//百位进位
        count++;
    }
    cout<<1000-100-count<<endl;
}

/*
include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int count=0;
    for(int i=100;i<1000;i++){
        if((a+i)/1000>0){
            count++;
        }
    }
    cout<<count<<endl;
}
*/