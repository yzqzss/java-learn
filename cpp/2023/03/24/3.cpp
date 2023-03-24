#include <iostream>
using namespace std;

int main(){
    long long int x;
    cin>>x;
    while (x != 0){
        cout<<x%10<<" ";
        x /= 10;
    }
    cout<<endl;
}