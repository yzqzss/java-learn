// 数组--- 数列的第n项值
// Description
// 一组数列，前两个数分别是1和n，从第三个数起，
// 每个数都是它前面两个数中大数减小数的差，那么第m个数是多少？
// Input
// 两个正整数 n和m
// Output
// 表示满足条件的个数。

// 1,n,n-1,1,

#include <iostream>
#include <assert.h>
#include <math.h>

void init_nList(int *list,int n,int index){
    assert(0<n && n<=1000300 && 1<=index && index<=1000300);
    list[0] = 0;
    list[1] = 1;
    list[2] = n;
    for (int p=3;p<=index;p++){
        list[p] = std::abs(list[p-1]-list[p-2]);
    }
}

int main(){
    int n,m;
    std::cin>>n>>m;
    int nList[1000001];
    init_nList(nList,n,m);
    std::cout<<nList[m];
}
