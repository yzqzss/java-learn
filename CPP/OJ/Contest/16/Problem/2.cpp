// 输入一行四个整数a，b，c，d，数与数之间用空格分开
// Output
// 输出一行：四个从小到大排序的整数a，b，c，d，数与数之间用空格分开

#include <iostream>
using namespace std;

int main(){
    int list[4];
    for (int i = 0;i<4;i++){
        cin>>list[i];
    }
    for (int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            if (list[i]<list[j]){
                swap(list[i],list[j]);
            }
        }
    }
    cout<<list[0]<<" "<<list[1]<<" "<<list[2]<<" "<<list[3];
}