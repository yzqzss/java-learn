#include <iostream>
// #include <math.h>
using namespace std;

// int max(int a, int b){
//     return (a>b) ? a : b ;
// }

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c)<<endl;
}