// 函数--两最大质数积
// Description
// 两个质数的和是n，它们的积最大是多少？
// Input
// 输入一个大于4的偶数n
// Output
// 输出两质数乘积最大的结果

#include <iostream>
#include <math.h>
using std::cin, std::cout, std::endl, std::sqrt;

bool is_prime(int x){
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x%2 == 0) return false;

    int end = sqrt(x);
    for (int i = 3; i <= end; i+=2){
        if (x%i == 0) return false;
    }

    return true;
}

int max_prime_product(int prime_sum){
    int _max = 0;
    int __tmp = 0 ;
    for (int i=2;i<=prime_sum/2;i++){
        if (is_prime(i) && is_prime(prime_sum-i)){
            __tmp = i * (prime_sum-i);
            if (__tmp > _max) _max = __tmp;
        }
    }

    return _max;
}

int main(){
    int n;
    cin>>n;
    cout<<max_prime_product(n);
}