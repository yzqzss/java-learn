#include <stdio.h>
#include <math.h>

double a,b;
double len;

int main(){
	scanf("%lf %lf", &a,&b);
	len=fabs(a-b);
	
	if (len<b) {
		printf("%lf hha", a);
	}
		
	
	int c = a/b;
	printf("%lf", a-c*b);
}
