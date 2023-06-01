
// 数组--- 全区间内的真素数
// Description
// 找出正整数 M 和 N 之间（N 不小于 M）的所有真素数的个数。
// 真素数的定义：如果一个正整数 P 为素数，且其反序也为素数，那么 P 就为真素数。
// 例如，11，13 均为真素数，因为11的反序还是为11，13 的反序为 31 也为素数。
// Input
// 输入
// 输入两个数 M 和 N，空格间隔
// Output
// 输出
// 一个正整数，给定区间的真素数的个数

#include <math.h>
#include <assert.h>
#include <iostream>

bool isPrime(int x){
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x%2 == 0) return false;

    int end = sqrt(x);
    for (int i = 3; i <= end; i+=2){
        if (x%i == 0) return false;
    }

    return true;
}

int intReverse(int num){
    assert(num>0);
    int t=0;
    while (num!=0){
        t = t*10+num%10;
        num/=10;
    }
    return t;
}

int main(){
    int m,n;
    std::cin>>m>>n;
    assert(m<n && 0<m);
    int true_prime = 0;
    for (int x=m;x<=n;x++){
        if ( isPrime(x) && isPrime(intReverse(x)) ){
            true_prime++;
        }
    }
    std::cout<<true_prime;
}