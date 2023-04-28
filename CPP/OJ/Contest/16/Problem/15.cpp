// Description
// 正整数x的约数是能整除x的正整数。正整数x的约数个数记为div（x）。
// 例如1，2，5，10都是正整数10的约数，且div（10）=4 。
// 设a和b是两个正整数，a<b，找出a和b之间约数个数最多的数x，即a<=x<=b
// Input
// 输入两个正整数a和b，用空格隔开
// Output
// 输出一个正整数

#include <iostream>
#include <math.h>
using namespace std;

int div(int x){
    int pre_sqrt = sqrt(x);
    int hits = 0;
    for (int i=1;i<=pre_sqrt;i++){
        if (x%i==0){
            hits += 2;
        }
    }

    if (pre_sqrt*pre_sqrt==x){
        hits -= 1;
    }

    return hits;
}

int main(){
    int range_start, range_end;
    cin>>range_start>>range_end;

    int max_div=0, target_x=0;

    for (int x=range_start;x<=range_end;x++){
        if (div(x) <= max_div) continue;

        max_div = div(x);
        target_x = x;
    }

    cout<<max_div<<endl; // 为啥让输出 max_div ，这题不是应该输出 target_x 吗？
}