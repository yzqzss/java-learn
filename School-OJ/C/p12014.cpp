/*循环结构---求满足条件五位数的最大最小值

Description

在一个互不相同数字的五位数中，统计能被3、7、11同时整除的整数个数，并输出最小值和最大值？

Input

无

Output

两个数，所求得的最小值和最大值，用空格分开*/

#include <iostream>
using namespace std;


bool isDiffNumber(int n){//判断是否为互不相同的五位数
    int list[5]={};
    for (int i = 0; i < 5; i++){
        list[i]=n%10;
        n/=10;
    }
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5; j++){
            if (list[i]==list[j])
            {
                return false;
            }
        }
    }
    return true;
}


int main(){
    bool flag = 0;
    int number,count=0;

    for (int i=10000; i<100000; i++){
        if ((i%3==0 && i%7==0 && i%11==0) && (isDiffNumber(i))){
            if (flag==0){
                cout<<i<<" ";//输出最小值
                flag=1;
            }
            number = i;
            count++;
        }
    }
    cout<<number;//输出最大值
}