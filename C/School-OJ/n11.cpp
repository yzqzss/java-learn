/*Description
  
  从键盘输入两个不相等的数，存入a和b，判断a和b的大小，操作实现a的值大于b的值，并从大到小显示出来。
  
  Input
  
  输入两个数，用空格隔开
  
  Output
  
  从大到小输出两个数，用空格隔开
 */

#include <stdio.h>

int a,b;

int main(){
	scanf("%d %d", &a,&b);
	a>b ? printf("%d %d", a,b) : printf("%d %d", b,a);
}