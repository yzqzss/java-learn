//输入一个字符串，将该字符串倒置后输出。

#include <stdio.h>
#include <string.h>

int main(){
    char str[10240];
    scanf("%s", str);
    for (int i=strlen(str)-1; i>=0; i--){
        printf("%c", str[i]);
    }
}