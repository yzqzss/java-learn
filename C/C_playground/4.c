#include <stdio.h>
#include <math.h>

int isPrime(int x){
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x%2 == 0) return 0;

    int end = sqrt(x);
    for (int i = 3; i <= end; i+=2){
        if (x%i == 0) return 0;
    }

    return 1;
}

int reverse(int x){
    int result = 0;
    while (x > 0){
        result = result*10 + x%10;
        x /= 10;
    }
    return result;
}

int main(){
    for (int i = 1; i <= 1000; i++){
        if (i == reverse(i) && isPrime(i)){
            printf("%d\t", i);
        }
    }
}