#include <stdio.h>

int reverse(int x){
    int reversed = 0;
    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return reversed;
}

int main() {
    for (int i = 1; i <= 1000; i++){
        if (i == reverse(i))
            printf("%d\t", i);
    }
}