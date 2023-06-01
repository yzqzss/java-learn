// 自定义函数，实现库函数strcmp的功能，要求利用指针实现。

// ESCRIPTION
//        The strcmp() function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-
//        aware comparison, see strcoll(3)).  The comparison is done using unsigned characters.

//        strcmp() returns an integer indicating the result of the comparison, as follows:

//        • 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.

int strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] < s2[i]){
            return -1;
        }else if(s1[i] > s2[i]){
            return 1;
        }
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0'){
        return 0;
    }else if(s1[i] == '\0'){
        return -1;
    }else{
        return 1;
    }
}

// #include <iostream>
// using namespace std;

// int main(){
//     char s1[100], s2[100];
//     cin >> s1 >> s2;
//     cout << strcmp(s1, s2) << endl;
// }