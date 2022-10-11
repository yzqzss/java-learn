/*Description
  
  在一个笼子里有鸡和兔子宫n只，它们共有m只脚，请用算式分别计算鸡和兔子各是多少，
  
  Input
  
  输入两个整数：n和m用空格隔开
  
  Output
  
  输出两个整数，分别代表鸡和兔 的数量，用空格隔开
 */

#include <stdio.h>

int n,m,chicken,rabbit;

int main(){
	scanf("%d %d", &n,&m);
	for (chicken=0;chicken<=n;chicken++){
		rabbit = n - chicken;
		(((2*chicken) + (4*rabbit)) == m) ? printf("%d %d", chicken,rabbit) : NULL;
	}
}
