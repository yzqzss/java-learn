#include <stdio.h>

int n,x,y;

int main(){
	scanf("%d %d %d", &n,&x,&y);
	n=n-(y/x);
	if ((y%x)>0) {//正在吃的苹果是烂苹果；刚吃完上一个苹果的那一刻，下一个苹果还是好的
		n-=1;
	}
	if (n<0) {//苹果数量怎么吃也不会变成负数
		n=0;
	}
	printf("%d", n);
}	
