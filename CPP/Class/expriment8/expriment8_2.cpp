// 定义一个4×4的矩阵，利用指向该矩阵的指针实现对矩阵的输入，然后输出每一行的最小值。
#include <iostream>
using namespace std;


int main(){
    int matrix_rows = 4;
    int matrix_columns = 4;
    int matrix_size = matrix_rows * matrix_columns;
    int *matrix = new int[matrix_size];
    for(int i = 0; i < matrix_size; i++){
        cin >> matrix[i];
    }
    for(int row = 0; row < matrix_rows; row++){
        int min = matrix[row * matrix_columns];
        for(int column = 0; column < matrix_columns; column++){
            if(matrix[row * matrix_columns + column] < min){
                min = matrix[row * matrix_columns + column];
            }
        }
        cout << min << endl;
    }
}