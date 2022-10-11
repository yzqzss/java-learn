#include "stdio.h"

int main(){
	int init=1,a,b,c;
	a=init++;
	b=init++;
	c=init++;
	printf("%d %d %d\n", a,b,c);
	a=++init;
	b=++init;
	c=++init;
	printf("%d %d %d\n", a,b,c);
}
