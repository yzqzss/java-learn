#include<stdio.h>
int main() {
    int l, t,t1;
    double f, l1;
    scanf_s("%d%d", &l, &t);
    t1 = t / 3;
    if (l <= 2) {
        l1 = 6;
    }
    else if (l>2&&l<=10) {
        l1 = 6 + (l - 2) * 1.8;
    }
    else if (l > 10) {
        l1 = 6 + 8 * 1.8 + (l - 10) * 2.7;
    }
    f = l1 + t1;
    
    
    
    
//    f = ((double)((int)(f * 100))) / 100.0;
    
    double dec_f;
    dec_f = f-(int)f;
    
    if (dec_f<0.05){
        printf("%d", (int)f);
    }else{
        printf("%0.1lf", f);
    }
    if (0.00000 > 0){printf("sdsddssdds");}
}
