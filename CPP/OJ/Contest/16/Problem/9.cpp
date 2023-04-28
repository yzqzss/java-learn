// 用递归函数求两个正整数m，n的最大公约数。

#include <iostream>
using std::cout, std::cin, std::endl;

int gcd(int m, int n){
    if (n == 0){
        return m;
    }else{
        return gcd(n, m % n);
    }
}


int main(){
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;
}