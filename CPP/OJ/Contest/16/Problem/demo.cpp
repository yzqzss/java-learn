#include <iostream>
// // #include <cstring>
using namespace std;
// void prt(int *x, int *y, int *z){
//     ++*x;
//     ++*y;
//     *(z++);
// }

int main(){
    // // volatile long long int *h;
    // // *h = 12212;
    // int x = 123123;
    // {
    //     x++;
    // }
    // int y = 666;
    // {
    //     int y = 777;
    //     y++;
    // }
    // y++;
    // char asd[] = "bleablWEFJIDJGBjkvreuiuirereilbl;aesrubliuvsaerbli;['knft'pnfynf]bcslbdsf";
    // int a=10,b=40,c=20;

    int y[] = {1,2,3,4};
    int x[] = {1,2,3,4};
    volatile int c=1;
    volatile int kk;
    kk = x[0];
    kk = x[1];
    cout<< x[6];
    
    // prt(&a,&b,&c);
    // prt(&a,&b,&c);

    // volatile int h;
    // // volatile int x=1;
    // // volatile int x=1;
    // h = sizeof(m);
    // cout<<h;
    // return 0;
}