#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    cout<<log10(1+sqrt(1+(x*x)))<<endl;
}