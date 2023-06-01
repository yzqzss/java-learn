// 定义一个类，其功能是计算n个整型数组元素的最大值和最小值。
// 要求输入、计算最大值和最小值都由成员函数实现，输出在主函数中实现。

#include <iostream>
#include <assert.h>
using namespace std;

class Array{
    private:
        int *arr;
        size_t size;
    public:
        Array(size_t n);

        void input(size_t index, int value){
            assert(index < size);
            arr[index] = value;
        }
        int max(){
            int max = arr[0];
            for (size_t i=0;i<size;i++){
                if (arr[i] > max) max = arr[i];
            }
            return max;
        }
        int min(){
            int min = arr[0];
            for (size_t i=0;i<size;i++){
                if (arr[i] < min) min = arr[i];
            }
            return min;
        }
};

Array::Array(size_t n){
    arr = new int[n];
    size = n;
}

int main(){
    size_t n;
    cout << "Length: ";
    cin >> n;
    Array arr(n);
    for (size_t i=0;i<n;i++){
        int value;
        cout << "Value: ";
        cin >> value;
        arr.input(i, value);
    }
    cout << "MAX: " << arr.max() << endl;
    cout << "MIN: " << arr.min() << endl;
}