/*循环结构--余数和

Description

给出正整数n和k，计算G(n, k)=1 modn+ 2 modn+ 3modn+ … +kmod n的值，其中k mod n表示k除以n的余数。

Input

两个整数n k

Output

一个整数*/

#include<iostream>
using namespace std;

int main(){
    long  int n,k;
    cin>>n>>k;
    long long int pack;
    // for (int i=0;i<n;i++){
    //     pack+=i;
    // }
    pack = (n*(n-1))/2;

    long long int sum= pack*(k/n);
    
    for (int i=0;i<=(k%n);i++){
        sum+=i;
    }
    
    cout<<sum;
    
}

