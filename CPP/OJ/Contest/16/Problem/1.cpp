// 在一个笼子里有鸡和兔子宫n只，它们共有m只脚，请用算式分别计算鸡和兔子各是多少，
// Input
// 输入两个整数：n和m用空格隔开
// Output
// 输出两个整数，分别代表鸡和兔 的数量，用空格隔开

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    x=(4*n-m)/2;
    y=n-x;
    cout<<x<<" "<<y;
}