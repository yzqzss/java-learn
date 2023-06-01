// 三个互不相等的质素，它们的乘积等于它们和的17倍，求这三个不同的质数？
// Output: 三个互不相同的质数，用空格分开

#include <iostream>
#include <math.h>
using namespace std;

#define LEN 15

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

int main(){
    int primes[LEN];
    int index = 0, _tmp_num = 1;
    while (index<LEN){
        if (!is_prime(_tmp_num)){
            _tmp_num++;
            continue;
        }
        primes[index] = _tmp_num;
        _tmp_num++, index++;
    }
    // int p1,p2,p3;
    for (int p1=0;p1<LEN;p1++){
    for (int p2=0;p2<LEN-p1;p2++){
    for (int p3=0;p3<LEN-p2;p3++){
        if (p1 == p2 || p1 == p3 || p2 == p3) continue;

        if (
            primes[p1] * primes[p2] * primes[p3] == (primes[p1] + primes[p2] +primes[p3]) * 17
        ){
            cout<<primes[p1]<<' '<<primes[p2]<<' '<<primes[p3]<<endl;
            return 0;
        }
    }
    }
    }
}