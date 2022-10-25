/*已知 abc+cba=1333,其中 a、b、c 均为一个数字，求 a、b、c 的值*/

#include<iostream>
using namespace std;
int main(){
    for (int a=1;a<=9;a++){
        for (int b=0;b<=9;b++){
            for (int c=1;c<=9;c++){
                if ((a*100+b*10+c) + (c*100+b*10+a) == 1333){
                    cout<<a<<" "<<b<<" "<<c<<"\n";
                }
            }
        }
    }
    
    
}