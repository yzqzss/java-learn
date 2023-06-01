// 给定一个包含n个正整数的数组，自定义函数，计算数组中能被3整除的数的平均值（精确到小数点后2位）
// ，要求利用指针实现并在主函数中进行输入输出

#include <iostream>
#include <assert.h>
using namespace std;

double avg_div3(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    long long int sum = 0;
    size_t count = 0;
    for(size_t i=0; i < len; i++){
        if(arr[i] % 3 == 0){
            sum += arr[i];
            count++;
        }
    }
    return sum / (double)count;
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    // 保留小数点后2位
    cout << fixed;
    cout.precision(2);
    cout << avg_div3(arr, n) << endl;
    // reset
    cout.unsetf(ios::fixed);

    delete [] arr;
}