// 自定义函数，其功能是将字符串中的大写字母转换成小写字母。要求利用指针实现并在主函数中进行输入输出。

#include <iostream>
#include <assert.h>
using namespace std;

void str_lower(char *str){
    assert(str != NULL);
    for(size_t i=0; str[i] != '\0'; i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            str[i] = (str[i] - 'A') + 'a';
        }
    }
}


int main(){
    string str;
    cin >> str;
    str_lower(&str[0]);
    cout << str << endl;
}