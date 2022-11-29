/*Description

求1+11+111+1111+…+11….11（n个1）的和除以7的余数是多少？

Input

一行：一个正整数n

Output

一行：所得的余数*/

/*
n = int(input())
for n in range(1, n+1):
    sum = int('1'*n)
    if sum%7 == 0:
        print(sum)
        break

找到111111%7==0

1 1
11 4
111 6
1111 5
11111 2
111111 0
*/

#include <iostream>
using namespace std;

int list[6]={1,4,6,5,2,0};//余数每轮+4

int buildOne(int n){// 构造 n 个 1
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum*10 + 1;
    }
    return sum;
}

int main(){
    int n,sum=0,loop;
    cin >> n;
    loop = n/6;

    // 算前面整轮的和
    sum=loop*4;

    // 算最后一轮的和
    for(int i=0; i<n%6; i++){
        sum += list[i];
    }

    cout << sum%7 << endl;
}