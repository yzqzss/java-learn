#include <math.h>

double pow(double a, double pl){
    double result = 1;
    for (double i=0;i<pl;i++){
        result *= a;
    }
    return result;
}

double fn1(double x){
    return 3 * pow(x, 3) + 2 * pow(x, 2) -1;
}

double fn2(double x){
    return pow(x, 2) + 2 * x + 1;
}

int main(){
    volatile double x = 2;
    volatile double ans1, ans2;
    ans1=fn1(x), ans2=fn2(x);
    volatile int bk;
}