// Description
// 输入一个n行m列的矩阵A，输出它的转置AT。
// Input
// 输入
// 第一行包含两个整数n和m，表示矩阵A的行数和列数。1 <= n <= 100，1 <= m <= 100。
// 接下来n行，每行m个整数，表示矩阵A的元素。相邻两个整数之间用单个空格隔开，
// 每个元素均在1~1000之间。
// Output
// 输出
// m行，每行n个整数，为矩阵A的转置。相邻两个整数之间用单个空格隔开。

#include <iostream>
#include <assert.h>
using namespace std;

int main(){
    // n -> row, m -> column
    int rows,column;
    cin >> rows >> column;
    assert(rows > 0 && column > 0);
    assert(rows <= 100 && column <= 100);
    int **arr = new int*[rows]; // arr[i] 指针数组
    for(int i=0; i < rows; i++){
        arr[i] = new int[column];
        for(int j=0; j < column; j++){
            cin >> arr[i][j];
            // assert(arr[i][j] >= 1 && arr[i][j] <= 1000);
            // 测试点 3.in 和 10.in 里有 0 存在。题目描述里说每个元素均在 1 ~ 1000 之间。
            // 应该改成 0~1000 之间。
        }
    }

    // print 转置，但是没有实际转置 ;)
    for(int i=0; i < column; i++){
        for(int j=0; j < rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}