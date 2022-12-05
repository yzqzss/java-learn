/*在二维数组中生成杨辉三角*/

#include <stdio.h>

int main(){

    int max = 20;// 输出多少行

    int a[max][max];
    int i,j;
    for(i=0;i<max;i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<max;i++){
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<max;i++){
        for(j=0;j<=i;j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
}