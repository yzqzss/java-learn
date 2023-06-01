// 约瑟夫问题：
// Description
// N个人围成一圈，从第一个人开始报数，数到M的人出圈；再由下一个人继续从1开始报数，
// 数到M的人出圈；…最后一个出圈的人原来的编号是多少。
// Input
// 输入：N，M由键盘输入。两个正整数用空格分开
// 数据规模：
// 1<m<n<100000
// Output
// 输出一个正整数

#include <iostream>
#include <assert.h>
using namespace std;

int josephus(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; ++i){
        res = (res + k) % i;
    }
    return res;
}


int main(){
    int _n,_m;
    cin >> _n >> _m;
    int const PEOPLE = _n, M = _m;

    assert(PEOPLE > 0 && M > 0);
    assert(PEOPLE < 100000 && M < 100000);
    assert(PEOPLE > M);

    cout << josephus(PEOPLE, M) + 1 << endl;
}
    // int *innode = new int[PEOPLE]; // innode[i] == 0 表示出圈
    // for(int i=0; i < PEOPLE; i++){
    //     innode[i] = i+1;
    // }

    // int outers = 0; // 出圈人数
    // int index = -1;
    // while(outers < PEOPLE-1){
    //     int speakers = 0; // 一圈中报数的人数
    //     while(speakers < M){
    //         index = (index + 1) % PEOPLE; // % 保证 index 越界超过 PEOPLE 时，从 0 再开始
    //         if(innode[index] != 0){ // 这人没出圈
    //             speakers++;
    //         }
    //     }
    //     // i == M
    //     innode[index] = 0;
    //     outers++;
    // }

    // for(int i=0; i < PEOPLE; i++){
    //     if(innode[i] != 0){
    //         cout << innode[i] << endl;
    //         break;
    //     }
    // }

    // delete[] innode;
// }