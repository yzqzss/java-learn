/*# Description

# 请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。

# Input

# 输入共1行，为两个正整数L和R，之间用一个空格隔开。（<=10000）

# Output

# 输出共1行，表示数字2出现的次数。*/

# include <iostream>
using namespace std;

int main(){
    int l,r,count=0;
    cin >> l >> r;

    // 个位每10次+1，十位每10次变动1次，百位每100次变动1次，以此类推……
    // 先试暴力法
    // 反正数据量小，暴力点就暴力点吧……
    for (int i=l; i<=r; i++){
        int temp = i;
        while(temp){
            if(temp%10 == 2){
                count++;
            }
            temp /= 10;
        }
    }
    cout << count << endl;
}