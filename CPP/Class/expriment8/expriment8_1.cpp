// 对n个整数的输入（n≤100），并输出这n个整数的平均值。要求分别利用下标法和指针法实现。

#include <iostream>
#include <assert.h>
using namespace std;

int main_index(){
    int arr[100],n;
    cin>>n;
    assert(0<n<=100);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    cout << sum / (double)n << endl;
}


int main(){
    int n;
    cin >> n;
    assert(0<n);
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum / (double)n << endl;
    delete[] arr;
}