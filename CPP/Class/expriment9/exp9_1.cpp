// 有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。

#include <iostream>
#include <assert.h>
using namespace std;

void strcopy_from(char *src, char *dest, size_t copy_from, size_t len_dest){
    assert(src != NULL && dest != NULL);
    assert(copy_from > 0 && len_dest > 0);

    size_t i;
    for(i=0; src[copy_from+i] != '\0'; i++){
        assert(i < len_dest);
        dest[i] = src[copy_from+i];
    }
    dest[i] = '\0';
    // clean memory
    // for(; i < len_dest; i++){
    //     dest[i] = '\0';
    // }

}


int main(){
    char src[] = "hello abcdefg abcdefg abcdefg  abcdefgabcdefg abcdefgabcdefgabcdefg" ;
    char dest[100];
    strcopy_from(src, dest, 3, 100);
    cout << dest << endl;
    return 0;
}