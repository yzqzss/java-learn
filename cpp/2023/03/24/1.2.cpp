#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b;
    double part1;
    int part2;
    cin>>a>>b;
    part1 = abs(a * a - b * b);
    part2 = int(a - b);
    cout<<part1+part2<<endl;
}