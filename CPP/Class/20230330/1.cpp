#include <iostream>
using namespace std;

int main(){
    int m,n,t;
    cin>>m>>n;
    if (n>m) {
        swap(m,n);
    }

    while (t=m%n) {
        m=n;
        n=t;
    }

    cout<<n<<endl;
}