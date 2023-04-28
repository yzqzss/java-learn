#include <iostream>

using namespace std;

int age(int who){
    if (who == 1){
        return 10;
    }
    int result = 0;
    result = age(who - 1) + 2;
    return result;
}

int main(){
    cout<<age(5)<<endl;
}