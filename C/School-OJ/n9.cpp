/*Description
  
  小明要去商店买铅笔。每支铅笔价格是a角b分，妈妈给了小明x元y角z分，问他最多能买多少支铅笔，还剩多少钱（多少角多少分）？
  
  Input
  
  输入一行：五个正整数a，b，x，y，z。用空格隔开
  
  Output
  
  输出一行：三个整数用空格隔开：分别铅笔数，剩下的多少角和多少分
 */

#include <stdio.h>

int a,b,x,y,z;
int price,money;
int pencils,leftMoney;

int main(){
	scanf("%d %d %d %d %d", &a,&b,&x,&y,&z);
	price=a*10+b;
	money=x*100+y*10+z;
	pencils=money/price;
	leftMoney=money-(price*pencils);
	printf("%d %d %d", pencils,(leftMoney/10),(leftMoney%10));		
}
