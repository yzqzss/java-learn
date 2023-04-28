#include <iostream>
using namespace std;


int adder(int step, int x){
    int total=0;
    for (int i = 0;i<step;i++){
        total += x;
        x=x*10+2;
    }

    return total;
}


int main(){
    cout<<adder(7,2)<<endl;
}