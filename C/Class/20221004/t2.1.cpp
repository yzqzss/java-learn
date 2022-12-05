#include "stdio.h"

#define s sizeof

int main(){
    char c;
    short int si; int i;long int li;
    float f; double lf;

    printf("c, si, i, li, f, lf\n");
    printf("%zd,  %zd, %zd,  %zd, %zd, %zd",s(c), s(si), s(i), s(li), s(f), s(lf));
}
