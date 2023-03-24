#include <iostream>
using namespace std;

int main(){
    int x;
    int step=0;
    cin>>x;
    while (x != 1){
        if ( x % 2 == 0 ){
            x/=2;
            step++;
        } else {
            x=(3*x+1)/2;
            step++;
        }
    }
    cout<<step<<endl;
}