// 数组---数列项的和
// Description
// 如下数列：2    9    17    24    32    39    47    54    62    …前N到M项的和是多少（包括N和M）？
//      diff  : 7    8    7      8     7     8 ...
//     diff_2:    1    0     1      0 ... 
// ITEM = 7 * x + ((x+1)/2) - 6
// sum_range = 7 * sum_x + ()

// Input
// 输入两个正整数n和m：用空格分开
// Output
// 输出：【n，m】项之间的和

#include <iostream>
using std::cin, std::cout;

// 找到规律：
//     数列：2    9    17    24    32    39    47   
//     diff:    7    8    7      8     7     8 ...
//     diff_2:    1    0     1      0 ... 
// ITEM = 7 * x + ((x+1)/2) - 6

long long int item(int x){
    return 7 * x + ((x+1)/2) - 6 ;
}

long long int sum_x(int start, int end){
    if ((end - start)%2 == 0){ // true -> 奇 , false -> 偶
        return ((start + end) / 2) * (end - start + 1);
        // 6,7,8
    }else{
        return (start + end) * ((end - start + 1) / 2);
        // 6,7,8,9
    }
}


long long int part_2(int start, int end){
    int _sum = sum_x(((start+1)/2), ((end+1)/2)) * 2;
    if (start%2 == 0){
        _sum-=(start+1)/2;
    }
    if (end%2 == 1){
        _sum-=((end+1)/2);
    }

    return _sum;
}

int main(){
    int n,m;
    cin>>n>>m;
    // long long int _sum,sumx;
    // sumx = sum_x(n,m);
    // _sum = 7 * sumx + part_2(n,m) - (6 * (m-n + 1));

    long long int _sum = 0;
    for (int x = n; x<=m;x++){
        _sum+=item(x);
        if (_sum<0){
            return 1;
        }
    }
    cout<<_sum;
}