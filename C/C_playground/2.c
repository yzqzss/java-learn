#include <stdio.h>

int cubeEachDigit(int x){
    int result = 0;
    int digit;

    while (x != 0) {
        digit = x % 10;
        result = result + digit * digit * digit;
        x /= 10;
    }

    return result;
}

int main() {
    for (int i = 1; i <= 1000; i++){
        if (i == cubeEachDigit(i))
            printf("%d\n", i);
    }
}