// P12030
// 我家住在一条短胡同里，这条胡同的门牌号从1开始顺序编号。若所有的门牌号之和减去我家门牌号的两倍，恰好等于n，
// 求我家的门牌号及总共有多少家。数据保证有唯一解。
// Input
// 一个正整数n。
// Output
// 一行，包含两个正整数，分别是我家的门牌号及总共有多少家，中间用单个空格隔开。

// 这道题的示例代码有问题，由于 `s>n&&(s-n)%2==0` ，所以只要当 s > n 且 s-n 是 2 的倍数，就会 break 。
// 问题是 (s-n)%2==0 这样写并不能确保满足答案 s-2j==n ，它会把 4、6、8 等错误倍数也强行算出来。
// 不过测试点给的数值好像都是正常的。

#include <iostream>

using namespace std;

int sum_doors(int no){
    if (no < 1){
        return -1;
    }
    int sum = no * (no + 1) / 2;
    if (sum<=0){
        return -1;
    }
    return sum ;
}

void value_handler(int x){
    if (x<=0){
        cout<<"RuntimeError: Value Error"<<endl;
    }
}

int main(){
    int n, no=1, sum_of_doors;
    cin >> n;
    for (no;;no++){
        sum_of_doors = sum_doors(no);
        value_handler(sum_of_doors);
        if (sum_of_doors <= n){
            continue;
        }
        if ((sum_of_doors - n) % 2 == 0){
            break;
        }
    }
    int my_no = (sum_of_doors - n) / 2;
    if (sum_of_doors - 2*my_no != n){
        cout<<"No answer"<<endl;
    }else{
        cout<<my_no<<" "<<no<<endl;
    }
}