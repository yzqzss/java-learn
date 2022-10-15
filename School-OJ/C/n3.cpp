#include <stdio.h>

int main(){
	int t,h,m,s;
	scanf("%d", &t);
	h=t/3600;m=(t/60)%60;s=t%60;
	printf("%d:%d:%d", h,m,s);
	
	return 0;
}
