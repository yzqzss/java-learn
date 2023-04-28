// 编写函数实现如下功能：输入正整数n和m，找出1至n（n<100000）之间各位上的数字之和为m的所有整数，
// 然后输出：符合条件的整数个数作为函数返回值。
// Input
// 输入两个正整数n和m，用空格分开
// Output
// 输出：满足条件的所有正整数的个数

#include <iostream>
using std::cout, std::cin, std::endl;

int sum_every_bits(int x){
    int _sum=0;
    while (x!=0){
        _sum += (x%10);
        x/=10;
    }
    return _sum;
}

bool is_every_bits_match(int num_to_sum, int to_match){
    if (sum_every_bits(num_to_sum) == to_match){
        return true;
    }else{
        return false;
    }
}

int total_hits(int n, int m){
    int hits = 0;
    for (int i=1;i<=n;i++){
        if (is_every_bits_match(i, m)){
            hits++;
        }
    }
    return hits;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<total_hits(n,m)<<endl;
}