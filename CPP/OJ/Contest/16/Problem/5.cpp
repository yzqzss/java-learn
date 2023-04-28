#include <iostream>


// for i in range(1,100):
//     print((6**i)%7) # 余数 6 1 6 1 6 1 循环

int main(){
    long long int n;
    std::cin>>n;
    if (n%2){
        puts("6");
    }else{
        puts("0");
    }
}