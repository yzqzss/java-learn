// 数组--- 全零的数组
// Description
// 约翰有个整数数组。
// 约翰每次给数组中所有非零数都加上一个相等的数，可以加负数。
// 约翰希望尽快让数组变得全是0。
// 约翰想知道最少要多少次操作。
// Input
// 输入格式
// 第一行一个整数n。
// 第二行n个整数a1,a2,...,an。
// 数据规模：
// 1≤n≤10^5
// 1≤|ai|≤10^5
// Output
// 输出格式
// 输出一个整数，约翰最少要操作多少次。

#include <iostream>
#include <assert.h>
using namespace std;


const int AI_MAX = 100000;
const int &BLANCE = AI_MAX ; // 0 的位置，用于配平负数

int main(){
    int n;
    cin >> n;
    assert(n > 0 && n <= 100000);

    int *arr = new int[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    bool *isDuped = new bool[AI_MAX*2 + 100]; // 数字是否重复
    for(int i=0; i < AI_MAX*2 + 100; i++){
        isDuped[i] = false;
    }

    int count = 0;

    for(int i=0; i < n; i++){
        if(arr[i] != 0){
            if(isDuped[arr[i] + BLANCE] == false){
                count++;
                isDuped[arr[i] + BLANCE] = true;
            }
        }
    }

    cout << count << endl;
    delete[] arr;
}