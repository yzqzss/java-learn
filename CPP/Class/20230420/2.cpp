#include <iostream>

using namespace std;

#define N 6

int main(){
    int _list[N];

    for (int i=0;i<N;i++){
        cin>>_list[i];
    }

    int _min = 0;
    for (int i=0;i<N-1;i++){
        _min = i;
        for (int j=i;j<N;j++){
            if (_list[_min]>_list[j]){
                _min = j;
            }
        }

        swap(_list[_min], _list[i]);
    }

    for (int i=0;i<N;i++){
        cout<<_list[i]<<"\t";
    }

}