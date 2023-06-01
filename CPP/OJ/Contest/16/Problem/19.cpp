// Description
// 冒泡排序
// 随机输入n个正整数，用冒泡排序法将其按从小到大的顺序排序。
// Input
// 第一行： 一个正整数n（表示正整数个数）
// 第二行：n个正整数，各个数之间用空格隔开
// Output
// 输出排序后的结果，各个数用空格隔开

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i < n -1; i++){
        cout << arr[i] << " ";
    }
    cout << arr[n-1];
    cout << endl;

    delete[] arr;
}