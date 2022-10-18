/*给定一个整数n，判断它能否被3，5，7整除*/

#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int list[] = {3,5,7};
    for (int i=0;i<3;i++){
        if (n%list[i]==0) printf("%d ",list[i]);
    }
}