// 验证歌德巴赫猜想
// 任何一个≥6之偶数，都可以表示成两个奇质数之和；任何一个≥9之奇数，都可以表示成不超过三个的奇质数之和

#include <stdio.h>
#include <math.h>

int numMap[100];

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

int canBeSumOfTwoPrime(int x){
    for (int i = 0; i < 100; i++){
        if (numMap[i] == 0) break;
        if (numMap[i] > x) break;
        if (isPrime(x - numMap[i])) return 1;
    }
    return 0;
}

int canBeSumOfThreePrime(int x){
    for (int i = 0; i < 100; i++){
        if (numMap[i] == 0) break;
        if (numMap[i] > x) break;
        if (canBeSumOfTwoPrime(x - numMap[i])) return 1;
    }
    return 0;
}

int main(){
    int numMapIndex = 0;
    for (int i = 0; i < 1000; i++){
        if (isPrime(i)){
            numMap[numMapIndex] = i;
            numMapIndex++;
        }
    }
    for (int i = 6; i < 1000; i+=2){
        if (canBeSumOfTwoPrime(i)){
            printf("%d can be sum of two prime\n", i);
        }else{
            printf("%d can not be sum of two prime\n", i);
        }
    }
    for (int i = 9; i < 1000; i+=2){
        if (canBeSumOfThreePrime(i)) printf("%d can be sum of three prime\n", i);
        else printf("%d can not be sum of three prime\n", i);
    }
}
