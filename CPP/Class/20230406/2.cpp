#include <iostream>
#include <math.h>

using namespace std;

double part(double x, int offset = 0){
    return 1/pow(x, offset);
}

int getOffset(double x){
    int offset = 1;
    while (part(x, offset) > 0.00001){
        offset++;
    }
    return offset;
}

double getTotal(double x){
    double result = 1;
    int offset = getOffset(x);
    for (int i=1;i<=offset;i++){
        result += part(x, i);
    }
    return result;
}

int main(){
    double x;
    cin>>x;

    cout<<getTotal(x)<<endl;
}