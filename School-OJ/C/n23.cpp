/*Description

输入一个正整数n，输出1~n中，含7和7的倍数的个数，还有包含7的数字例如（17，27，37...70，71，72，73...）

Input

输入正整数n：1<=n<=10000000

Output

输出一个正整数（即含7或7的倍数的个数）*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%7==0){
            count++;
        }else{
            int temp=i;
            while(temp>0){
                if(temp%10==7){
                    count++;
                    break;
                }
                temp/=10;
            }
        }
    }
    cout<<count<<endl;
}