/*特殊回文数

Description

123321是一个非常特殊的数，它从左边读和从右边读是一样的。
输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n。

Input

输入一行，包含一个正整数n。

Output

输出满足条件的回文整数的个数。*/

//1. 满足回文
//2. 满足各位数字之和等于n

#include<iostream>
using namespace std;

int numberOfDigits(int n){
    int count=0;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

bool isPalindrome(int n){
    int list[]={};
    for (int i = 0; i < numberOfDigits(n)/2; i++){
        list[i]=n%10;
        n/=10;
    }
}



int main(){
    int n,count=0;
    cin>>n;
}