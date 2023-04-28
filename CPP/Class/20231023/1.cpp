#include <iostream>
using namespace std;

int main(){
    int end = 100;
    int sum[100];
    sum[0]=1;
    for (int i=1;i<end;i++){
        sum[i]=sum[i-1]+i;
    }
    int total=0;
    for (int i=0;i<end;i++){
        total+=sum[i];
    }

    cout<<total;
}