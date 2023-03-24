#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    cout<<sqrt(1+1/(x+(1/(x+1))))<<endl;
}